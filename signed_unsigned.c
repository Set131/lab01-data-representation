#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int8_t signed_value = -1;
    uint8_t unsigned_value = 255;

    printf("Signed value (int8_t):   %d   | Hex: 0x%02X\n", signed_value, (uint8_t)signed_value);
    printf("Unsigned value (uint8_t): %u | Hex: 0x%02X\n", unsigned_value, unsigned_value);

    return 0;
}
