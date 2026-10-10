#include <stdio.h>

void print_binary(unsigned char value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void)
{
    unsigned char test_values[] = { 0, 1, 10, 65, 127, 128, 255 };
    int count = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < count; i++) {
        printf("Decimal: %3u | Hex: 0x%02X | Binary: ", test_values[i], test_values[i]);
        print_binary(test_values[i]);
        printf("\n");
    }

    return 0;
}
