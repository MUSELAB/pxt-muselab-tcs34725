//% icon="\uf26c"
//% color="#F59E20" weight="99"
namespace MuseTCS34725 {
    /**
     * initialises the i2c TCS34725 display
     */
    //% blockId=TCS34725_init_terminal
    //% block="initialize TCS34725"
    //% icon="\uf1ec" 
    //% shim=MuseTCS34725::TCS34725_Init
	//% weight=90	
	//% blockGap=8
    export function TCS34725_Init(): void {
        return;
    }


    /**
     * Get TCS34725 RGB data
     */
    //% weight=87
    //% block="Get RGB" 
    //% async
    //% blockId=Get_TCS34725_RGB_Data
    //% icon="\uf1ec"
    //% shim=MuseTCS34725::Get_Data
	//% weight=85	
	//% blockGap=8
    export function Get_Data(): void {
        return;
    }

    /**
     * prints a  TCS34725 red data
     */
    //% block="Show %style Colour Number" 
    //% blockId=Show_Colour_Number
    //% shim=MuseTCS34725::Show_Colour_Number
    export function Show_Colour_Number(style: TCS34725TemStyle): number {
        return 0;
    }
}
