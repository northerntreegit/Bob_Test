#include "pxt.h"

namespace pins {
    void digitalWritePin(int name, int value);
}
namespace pxt {
    void sleep_us(uint64_t us);
}

namespace bobtest {

    //% shim=bobtest::TTT_C
    void TTT_C() {
        // 发送10个1000Hz脉冲 (每个脉冲周期1ms)  
        for(int i = 0; i < 10; i++) {
            // 高电平阶段
            pins::digitalWritePin(MICROBIT_ID_IO_P1, 1);
            pxt::sleep_us(500); // 500微秒高电平
            
            // 低电平阶段
            pins::digitalWritePin(MICROBIT_ID_IO_P1, 0);
            pxt::sleep_us(500); // 500微秒低电平，完成1ms周期
        }
    }
} 