#ifndef _DEV_Config_H_
#define _DEV_Config_H_

#include "mbed.h"
#include "MicroBit.h"

#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t


/**
* IIC 
**/
#define IIC_Addr              0x29

/**
 * delay x ms
**/
#define DEV_Delay_ms(__xms)    Sleep(__xms)


class I2Cdev{

 public:   
    I2Cdev(MicroBitI2C i2c) : mi2c(i2c)
    {};
    void DEV_Set_I2CAddress(UBYTE Add);
    void DEV_I2C_WriteByte(UBYTE add_, UBYTE data_);
    void DEV_I2C_WriteWord(UBYTE add_, UWORD data_);
    UBYTE DEV_I2C_ReadByte(UBYTE add_);
    UWORD DEV_I2C_ReadWord(UBYTE add_);

    MicroBitI2C mi2c;
    
};

#endif
