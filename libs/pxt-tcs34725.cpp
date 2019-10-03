#include "pxt.h"
#include "TCS34725.h"
using namespace pxt;

namespace MuseTCS34725{
    MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
    I2Cdev *i2c_dev;
    TCS34725 *TCS34725_dev;
    //%
    void TCS34725_Init()
    {
        i2c_dev = new I2Cdev(i2c);
        TCS34725_dev = new TCS34725();
    }
    //%
    void Get_Data()
    {
        TCS34725_dev->Get_Data();
    }
    //%
    void Show_Colour_Number(TCS34725TemStyle style)
    {
        switch(style)
        {
            case GRT_RED:
                TCS34725_dev->Get_Red();
            break;
            case GRT_GREEN:
                TCS34725_dev->Get_Green();
            break;
            case GRT_BLUE:
                TCS34725_dev->Get_Blue();
            break;
        }
    }
}