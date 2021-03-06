#include "DEV_Config.h"
UBYTE IIC_Addr_t = IIC_Addr;

void I2Cdev::DEV_I2C_WriteByte(UBYTE add_, UBYTE data_)
{

  //int write( int address, const char * data, int length)
  char data = data_;

  mi2c.write(add_, &data, sizeof(data_));
}

void I2Cdev::DEV_I2C_WriteWord(UBYTE add_, UWORD data_)
{
  char data = data_;
  mi2c.write(add_, &data, sizeof(data_));
  data = data_ >> 8;
  mi2c.write(add_, &data, sizeof(data_));
}

UBYTE I2Cdev::DEV_I2C_ReadByte(UBYTE add_)
{
  //int read( int address, char * data, int length)
  char data;
  mi2c.read(add_, &data, 1);
  return (UBYTE)data;
 
}

UWORD I2Cdev::DEV_I2C_ReadWord(UBYTE add_)
{
  char x; uint16_t t;

  mi2c.read(add_, &x, 1);
  t = x;
  mi2c.read(add_, &x, 1);
  t = (t << 8) | x;
  return t;
}

void I2Cdev::DEV_Set_I2CAddress(UBYTE add_)
{
  IIC_Addr_t = add_;
 }
