#include "pxt.h"
#include "TCS34725.h"
using namespace pxt;

namespace pxt_tcs34725 {
    MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
    I2Cdev *i2c_dev;
    TCS34725 *TCS34725_dev;
    void Init()
    {
        i2c_dev = new I2Cdev(i2c);
        TCS34725_dev = new TCS34725();
    }

    void Get()
    {
        TCS34725_dev->Get_Data();
    }

    void Show_Red_Number()
    {
        TCS34725_dev->Get_Green();
    }

    void Show_Green_Number()
    {
        TCS34725_dev->Show_Red_Number();
    }

    void Show_Blue_Number()
    {
        TCS34725_dev->Get_Blue();
    }

}