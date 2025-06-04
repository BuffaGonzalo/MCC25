/*
 * mpu6050.c
 *
 *  Created on: May 24, 2025
 *      Author: gonza
 */

#include "MPU6050.h"
#include "main.h"
#include <stdlib.h>

// Referencia al bus I2C usado
extern I2C_HandleTypeDef hi2c1;

extern int16_t ax_real, ay_real, az_real;
extern int16_t gx_real, gy_real, gz_real;


// Variables convertidas a unidades físicas con escala ×100 (2 decimales fijos)
int16_t ax_real; // Aceleración en X [centésimas de m/s²]
int16_t ay_real;
int16_t az_real;

int16_t gx_real; // Velocidad angular en X [centésimas de grados/segundo]
int16_t gy_real;
int16_t gz_real;

// Variables RAW leídas directamente del sensor (int16_t = complemento a dos)
int32_t ax, ay, az, gx, gy, gz;

void MPU6050_Init(void)
{
    uint8_t data;

    // Salir del modo de bajo consumo (modo sleep)
    // Escritura en el registro PWR_MGMT_1 (0x6B)
    data = 0x00;
    HAL_I2C_Mem_Write(&hi2c1, MPU6050_ADDR, PWR_MGMT_1_REG, 1, &data, 1, HAL_MAX_DELAY);

    // Configurar acelerómetro con rango ±2g (registro ACCEL_CONFIG = 0x1C, valor 0x00)
    data = 0x00;
    HAL_I2C_Mem_Write(&hi2c1, MPU6050_ADDR, ACCEL_CONFIG_REG, 1, &data, 1, HAL_MAX_DELAY);

    // Configurar giroscopio con rango ±250°/s (registro GYRO_CONFIG = 0x1B, valor 0x00)
    data = 0x00;
    HAL_I2C_Mem_Write(&hi2c1, MPU6050_ADDR, GYRO_CONFIG_REG, 1, &data, 1, HAL_MAX_DELAY);
}

void MPU6050_Read_Accel(void)
{
    uint8_t Rec_Data[6];

    // Leer 6 bytes desde ACCEL_XOUT_H (registro 0x3B)
    HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, ACCEL_XOUT_H_REG, 1, Rec_Data, 6, HAL_MAX_DELAY);

    // Combinar bytes altos y bajos en variables de 16 bits con signo
    ax = (int16_t)(Rec_Data[0] << 8 | Rec_Data[1]);
    ay = (int16_t)(Rec_Data[2] << 8 | Rec_Data[3]);
    az = (int16_t)(Rec_Data[4] << 8 | Rec_Data[5]);

    // Aplicar offset y escalar a m/s² (con 2 decimales fijos)
    if (abs(ax) <= OFFSET_AX)
        ax_real = 0;
    else
        ax_real = (ax / 16384.0f) * GRAVEDAD * MULTIPLICADORFLOAT;

    if (abs(ay) <= OFFSET_AY)
        ay_real = 0;
    else
        ay_real = (ay / 16384.0f) * GRAVEDAD * MULTIPLICADORFLOAT;

    if (abs(az) <= OFFSET_AZ)
        az_real = 9.81 * MULTIPLICADORFLOAT;  // en reposo debería medir ~1g hacia Z
    else
        az_real = (az / 16384.0f) * GRAVEDAD * MULTIPLICADORFLOAT;
}

void MPU6050_Read_Gyro(void)
{
    uint8_t Rec_Data[6];

    // Leer 6 bytes desde GYRO_XOUT_H (registro 0x43)
    HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, GYRO_XOUT_H_REG, 1, Rec_Data, 6, 1000);

    // Combinar bytes altos y bajos
    gx = (int16_t)(Rec_Data[0] << 8 | Rec_Data[1]);
    gy = (int16_t)(Rec_Data[2] << 8 | Rec_Data[3]);
    gz = (int16_t)(Rec_Data[4] << 8 | Rec_Data[5]);

    // Aplicar offset y escalar a grados/segundo (centésimas)
    if (abs(gx) <= OFFSET_GX)
        gx_real = 0;
    else
        gx_real = (gx / 131.0f) * MULTIPLICADORFLOAT;

    if (abs(gy) <= OFFSET_GY)
        gy_real = 0;
    else
        gy_real = (gy / 131.0f) * MULTIPLICADORFLOAT;

    if (abs(gz) <= OFFSET_GZ)
        gz_real = 0;
    else
        gz_real = (gz / 131.0f) * MULTIPLICADORFLOAT;
}

void MPU6050_GetAccel(int16_t *ax, int16_t *ay, int16_t *az) {
    if (ax) *ax = ax_real;
    if (ay) *ay = ay_real;
    if (az) *az = az_real;
}

void MPU6050_GetGyro(int16_t *gx, int16_t *gy, int16_t *gz) {
    if (gx) *gx = gx_real;
    if (gy) *gy = gy_real;
    if (gz) *gz = gz_real;
}


