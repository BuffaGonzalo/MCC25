/*
 * util.h
 *
 *  Created on: May 20, 2025
 *      Author: gonza
 */

#ifndef INC_UTIL_H_
#define INC_UTIL_H_

/**
 * @brief Enumeracion nameless
 *
 */
enum {
	FALSE, TRUE
};

/**
 * @brief Mapa de bits para declarar banderas
 *
 */
typedef union{
    struct{
        uint8_t bit7 : 1;
        uint8_t bit6 : 1;
        uint8_t bit5 : 1;
        uint8_t bit4 : 1;
        uint8_t bit3 : 1;
        uint8_t bit2 : 1;
        uint8_t bit1 : 1;
        uint8_t bit0 : 1;
    }bits;
    uint8_t bytes;
}_uFlag;

#endif /* INC_UTIL_H_ */
