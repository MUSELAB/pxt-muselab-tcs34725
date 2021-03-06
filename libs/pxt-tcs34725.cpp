#include "pxt.h"
#include "TCS34725.h"
using namespace pxt;

int data = 0;
MicroBitI2C i2c(I2C_SDA0, I2C_SCL0);
//I2Cdev *i2c_dev;
TCS34725 *TCS34725_dev = NULL;

namespace MuseTCS34725{
    //%
    void TCS34725_Init()
    {
        //i2c_dev = new I2Cdev(i2c);
        TCS34725_dev = new  (i2c);  
        TCS34725_dev->TCS34725_Init();
    }
    //%
    void Get_Data()
    {
        TCS34725_dev->Get_Data();
    }
    //%
    int Show_Colour_Number(TCS34725TemStyle style)
    {
        
        if (TCS34725_dev == NULL) 
        {
            switch(style) {
                case GET_RED:
                    return 1;
                    //data = TCS34725_dev->Get_Red();
                break;
                case GET_GREEN:
                    return 2;
                    //data = TCS34725_dev->Get_Green();
                break;
                case GET_BLUE:
                    return 3;
                    //data = TCS34725_dev->Get_Blue();
                break;
            }
            return data;
            
            //return style;
        }
    }
}