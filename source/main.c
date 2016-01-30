#include "common.h"
#include "draw.h"
#include "i2c.h"

#define DISPLAY_TEXT "Hello ARM9 Entry Point!"
#define START_X 10
#define START_Y 10


void Reboot()
{
    i2cWriteRegister(I2C_DEV_MCU, 0x20, 1 << 2);
    while(true);
}


void PowerOff()
{
    i2cWriteRegister(I2C_DEV_MCU, 0x20, 1 << 0);
    while (true);
}


int main()
{
    ClearScreenFull(true, true);
    
    Reboot();
    return 0;
}
