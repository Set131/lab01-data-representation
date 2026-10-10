#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t value = 254;
    printf("Value: %u\n", value);

    value = 255;
    printf("Value: %u\n", value);

    value++;
    printf("Value after 255 + 1: %u\n", value);

    value++;
    printf("Value after 255 + 2: %u\n", value);

    return 0;
}
