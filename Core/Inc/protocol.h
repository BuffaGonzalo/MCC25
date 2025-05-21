/*
 * protocol.h
 *
 *  Created on: May 21, 2025
 *      Author: gonza
 */

#ifndef INC_PROTOCOL_H_
#define INC_PROTOCOL_H_


#include <stdint.h>


#define RXBUFSIZE           256
#define TXBUFSIZE           256

/**
 *
 * @brief Unión ara la descomposición/composición de números mayores a 1 byte
 *
 */
typedef union {
	uint32_t ui32;
	int32_t i32;
	uint16_t ui16[2];
	int16_t i16[2];
	uint8_t ui8[4];
	int8_t i8[4];
} _uWord;



/**
 * @brief estructura para la recepción de datos por puerto serie
 *
 */
typedef struct {
	uint8_t *buff; /*!< Puntero para el buffer de recepción*/
	uint8_t indexR; /*!< indice de lectura del buffer circular*/
	uint8_t indexW; /*!< indice de escritura del buffer circular*/
	uint8_t indexData; /*!< indice para identificar la posición del dato*/
	uint8_t mask; /*!< máscara para controlar el tamaño del buffer*/
	uint8_t chk; /*!< variable para calcular el checksum*/
	uint8_t nBytes; /*!< variable para almacenar el número de bytes recibidos*/
	uint8_t header; /*!< variable para mantener el estado dela MEF del protocolo*/
	uint8_t timeOut; /*!< variable para resetear la MEF si no llegan más caracteres luego de cierto tiempo*/
	uint8_t isComannd;
} _sRx;

/**
 * @brief Estructura para la transmisión de datos por el puerto serie
 *
 */
typedef struct {
	uint8_t *buff; /*!< Puntero para el buffer de transmisión*/
	uint8_t indexR; /*!<indice de lectura del buffer circular*/
	uint8_t indexW; /*!<indice de escritura del buffer circular*/
	uint8_t mask; /*!<máscara para controlar el tamaño del buffer*/
	uint8_t chk; /*!< variable para calcular el checksum*/
} _sTx;

typedef struct {
	_uWord myWord;
	_sTx SerialTx;
	_sRx SerialRx;
	_sTx WiFiTx;
	_sRx WiFiRx;
	uint8_t SerialBuffRx[RXBUFSIZE];
	uint8_t SerialBuffTx[TXBUFSIZE];
	uint8_t WiFiBuffRx[RXBUFSIZE];
	uint8_t WiFiBuffTx[TXBUFSIZE];
} _sComm;

/**
 * @brief Enumeración para la maquina de estados
 * que se encarga de decodificar el protocolo
 * de comunicación
 *
 */
typedef enum {
	HEADER_U, HEADER_N, HEADER_E, HEADER_R, NBYTES, TOKEN, PAYLOAD
} _eDecode;

/**
 * @brief Enumeración de los comandos del protocolo

 */
typedef enum {
	ALIVE = 0xF0,
	FIRMWARE = 0xF1,
	GETDISTANCE = 0xA3,
	ACK = 0x0D,
	UNKNOWN = 0xFF
} _eCmd;


uint8_t getByteFromRx(_sRx *dataRx, uint8_t iniPos, uint8_t finalPos);


#endif /* INC_PROTOCOL_H_ */
