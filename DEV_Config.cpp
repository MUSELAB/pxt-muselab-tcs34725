#include "DEV_Config.h"
UBYTE IIC_Addr_t = IIC_Addr;

void I2Cdev::DEV_I2C_WriteByte(UBYTE add_, UBYTE data_)
{

  //int write( int address, const char * data, int length)

  mi2c.write(add_, data_ & 0xFF, sizeof(data_));
}

void I2Cdev::DEV_I2C_WriteWord(UBYTE add_, UWORD data_)
{
  mi2c.write(add_, data_ & 0xFF, sizeof(data_));
  mi2c.write(add_, (data_ >> 8) & 0xFF, sizeof(data_));
}

UBYTE I2Cdev::DEV_I2C_ReadByte(UBYTE add_)
{
  //int read( int address, char * data, int length)
  UBYTE data；
  mi2c.read(add_, *data, 1）
  return data;
 
}

UWORD I2Cdev::DEV_I2C_ReadWord(UBYTE add_)
{
 uint16_t x; uint16_t t;

  mi2c.read(add_, *t, 1）
  mi2c.read(add_, *x, 1）
  
  x <<= 8;
  x |= t;
  return x;
}

void I2Cdev::DEV_Set_I2CAddress(UBYTE add_)
{
  IIC_Addr_t = add_;
 }
