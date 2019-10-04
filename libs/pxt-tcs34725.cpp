#include "pxt.h"
#include "TCS34725.h"
using namespace pxt;

namespace MuseTCS34725{
    MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
    //I2Cdev *i2c_dev;
    TCS34725 *TCS34725_dev;
    //%
    void TCS34725_Init()
    {
        //i2c_dev = new I2Cdev(i2c);
        TCS34725_dev = new TCS34725(i2c);  
        TCS34725_dev->TCS34725_Init();
    }
    //%
    void Get_Data()
    {
        TCS34725_dev->Get_Data();
    }
    //%
    UWORD Show_Colour_Number(TCS34725TemStyle style)
    {
        UWORD data = 0;
        if (TCS34725_dev != NULL) 
            return 0;
            
        switch(style)
        {
            case GET_RED:
                data = TCS34725_dev->Get_Red();
            break;
            case GET_GREEN:
                data = TCS34725_dev->Get_Green();
            break;
            case GET_BLUE:
                data = TCS34725_dev->Get_Blue();
            break;
        }
        return (int)data;
    }
}