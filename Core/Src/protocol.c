/*
 * protocol.c
 *
 *  Created on: May 21, 2025
 *      Author: gonza
 */

#include "protocol.h"
#include "util.h"
#include <stdint.h>

#include "main.h"


uint8_t isCommand = FALSE;
uint8_t chk = 0;


//Function definitions

uint8_t putHeaderOnTx(_sTx  *dataTx, uint8_t ID, uint8_t frameLength)
{
    dataTx->chk = 0;
    dataTx->indexData = dataTx->indexW;
    dataTx->buff[dataTx->indexW++]='U';
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]='N';
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]='E';
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]='R';
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]=frameLength+1;
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]=':';
    dataTx->indexW &= dataTx->mask;
    dataTx->buff[dataTx->indexW++]=ID;
    dataTx->indexW &= dataTx->mask;
    dataTx->chk ^= (frameLength+1);
    dataTx->chk ^= ('U' ^'N' ^'E' ^'R' ^ID ^':') ;
    return  dataTx->chk;
}

uint8_t putByteOnTx(_sTx *dataTx, uint8_t byte)
{
    dataTx->buff[dataTx->indexW++]=byte;
    dataTx->indexW &= dataTx->mask;
    dataTx->chk ^= byte;
    return dataTx->chk;
}

uint8_t putStrOntx(_sTx *dataTx, const char *str)
{
    volatile uint8_t globalIndex=0;
    while(str[globalIndex]){
        dataTx->buff[dataTx->indexW++]=str[globalIndex];
        dataTx->indexW &= dataTx->mask;
        dataTx->chk ^= str[globalIndex++];
    }
    return dataTx->chk ;
}

uint8_t getByteFromRx(_sTx *dataRx, uint8_t start, uint8_t end) {
	uint8_t getByte;
	dataRx->indexData += start;
	dataRx->indexData &= dataRx->mask;
	getByte = dataRx->buff[dataRx->indexData];
	dataRx->indexData += end;
	dataRx->indexData &= dataRx->mask;
	return getByte;
}


uint8_t decodeHeader(_sTx *dataRx)
{
	static uint8_t header = HEADER_U;
	static uint8_t nBytes;
    uint8_t auxIndex=dataRx->indexW; //Importante asignar valor de dataRx->indexW

    while(dataRx->indexR != auxIndex){
        switch(header)
        {
            case HEADER_U:
                if(dataRx->buff[dataRx->indexR] == 'U'){
                    //dataRx->timeOut = 5;
                    header = HEADER_N;
                }
            break;
            case HEADER_N:
                if(dataRx->buff[dataRx->indexR] == 'N'){
                    header = HEADER_E;
                }else{
                    if(dataRx->buff[dataRx->indexR] != 'U'){
                    	header = HEADER_U;
                    	dataRx->indexR--;
                    }
                }
            break;
            case HEADER_E:
                if(dataRx->buff[dataRx->indexR] == 'E'){
                    header = HEADER_R;
                }else{
                	header = HEADER_U;
                    dataRx->indexR--;
                }
            break;
            case HEADER_R:
                if(dataRx->buff[dataRx->indexR] == 'R'){
                    header = NBYTES;
                }else{
                    header = HEADER_U;
                    dataRx->indexR--;
                }
            break;
            case NBYTES:
                nBytes=dataRx->buff[dataRx->indexR];
                header = TOKEN;
            break;
            case TOKEN:
                if(dataRx->buff[dataRx->indexR] == ':'){
                    header = PAYLOAD;
                    dataRx->indexData = dataRx->indexR+1;
                    dataRx->indexData &= dataRx->mask;
                    chk = 0;
                    chk ^= ('U' ^'N' ^'E' ^'R' ^nBytes ^':') ;
                }else{
                    header = HEADER_U;
                    dataRx->indexR--;
                }
            break;
            case PAYLOAD:
                nBytes--;
                if(nBytes>0){
                   chk ^= dataRx->buff[dataRx->indexR];
                }else{
                    header = HEADER_U;
                    if(dataRx->buff[dataRx->indexR] == chk)
                    	return TRUE;
                }
            break;
            default:
                header = HEADER_U;
            break;
        }
        dataRx->indexR++;
        dataRx->indexR &= dataRx->mask;
    }
    return FALSE;
}

void initComm(_sTx *Rx, _sTx *Tx, volatile uint8_t *buffRx, uint8_t *buffTx){
    //INICIALIZAMOS VARIABLES
	Rx->buff = (uint8_t *)buffRx;
    Rx->indexR = 0;
    Rx->indexW = 0;
    Rx->indexData = 0;
    Rx->mask = RXBUFSIZE - 1; //Control de buffer 2n-1
    Rx->chk = 0;

    Tx->buff = (uint8_t *)buffTx;
    Tx->indexR = 0;
    Tx->indexW = 0;
    Tx->indexData = 0;
    Tx->mask = TXBUFSIZE - 1;
    Tx->chk = 0;

}


