//% color=#E3008C weight=100 icon="\uf1d8" block="Bob Test"
namespace bobtest {
    //% block="Test a"
    //% weight=100
    export function testFunction_TS(): void {
        //显示一个红心
        basic.showIcon(IconNames.Heart);
    }


    //% block="Test b"
    //% weight=90
    export function testFunction_TS2(): void {
        bobtest.TTT_C();
    }

}
