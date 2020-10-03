#include <stdio.h>
#include <stdint.h>

uint8_t crc8(uint8_t *addr, uint8_t len)
{
    uint8_t crc = 0, inbyte, i, mix;

    while (len--)
    {
        inbyte = *addr++;
        for (i = 8; i; i--)
        {
            mix = (crc ^ inbyte) & 0x01;
            crc >>= 1;
            if (mix)
            {
                crc ^= 0x8C;
            }
            inbyte >>= 1;
        }
    }

    return crc;
}

int main(void)
{

    uint8_t rom[] = {0x28, 0x39, 0x0f, 0x33, 0x05, 0x00, 0x00, 0xff};

    uint8_t crc = 0;

    crc = crc8(rom, sizeof(rom));

    printf("CRC = %02X\n", crc);

    return 0;
}