//% icon="\uf26c"
//% color="#F59E20" weight="99"
namespace MuseTCS34725 {
    /**
     * initialises the i2c TCS34725 display
     */
    //% blockId=TCS34725_init_terminal
    //% block="initialize TCS34725"
    //% icon="\uf1ec" 
    //% shim=pxt_tcs34725::TCS34725_Init
	//% weight=90	
	//% blockGap=8
    export function init(): void {
        return;
    }


    /**
     * Get TCS34725 RGB data
     */
    //% weight=87
    //% block="Get_RGB" 
    //% async
    //% blockId=Get_TCS34725_RGB_Data
    //% icon="\uf1ec"
    //% shim=pxt_tcs34725::Get_Data
	//% weight=85	
	//% blockGap=8
    export function Get(): void {
        return;
    }

        /**
     * prints a  TCS34725 red data
     */
    //% weight=87
    //% block="Show_Red_Number" 
    //% async
    //% blockId=Show_Red_Number
    //% icon="\uf1ec"
    //% shim=pxt_tcs34725::Get_Red
	//% weight=85	
	//% blockGap=8
    export function Show_Red_Number(): void {
        return;
    }

        /**
     * prints a TCS34725 green data
     */
    //% weight=87
    //% block="Show_Green_Number" 
    //% async
    //% blockId=Show_Green_Number
    //% icon="\uf1ec"
    //% shim=pxt_tcs34725::Get_Green
	//% weight=85	
	//% blockGap=8
    export function Show_Green_Number(): void {
        return;
    }

        /**
     * prints a TCS34725 Blue data
     */
    //% weight=87
    //% block="Show_Blue_Number" 
    //% async
    //% blockId=Show_blue_Number
    //% icon="\uf1ec"
    //% shim=pxt_tcs34725::Get_Blue
	//% weight=85	
	//% blockGap=8
    export function Show_Blue_Number(): void {
        return;
    }
}
