#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

void print_binary_8(unsigned char value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void)
{
    // --- Частина 1. Однобайтовий аналіз (Базове завдання) ---
    int input;
    printf("Enter value (0-255): ");

    if (scanf("%d", &input) != 1 || input < 0 || input > 255) {
        printf("Error: Invalid 8-bit value.\n");
        return 1;
    }

    unsigned char byte_val = (unsigned char)input;

    printf("\nDecimal:      %u\n", byte_val);
    printf("Hexadecimal:  0x%02X\n", byte_val);
    printf("Binary:       ");
    print_binary_8(byte_val);
    printf("\n");

    // Виводимо символ лише якщо він є зручним для відображення (ASCII 32 - 126)
    if (byte_val >= 32 && byte_val <= 126) {
        printf("Character:    %c\n", byte_val);
    }

    // --- Частина 2. Додаткове завдання (32-бітний інспектор) ---
    printf("\nValue: 0x12345678\n\n");
    uint32_t val32 = 0x12345678;
    unsigned char* p = (unsigned char*)&val32;

    printf("Size: %zu bytes\n\n", sizeof(val32));
    printf("Memory:\n");

    for (int i = 0; i < 4; i++) {
        printf("byte %d: 0x%02X\n", i, p[i]);
    }

    // Експериментальне визначення порядку байтів
    printf("\nByte order: ");
    if (*p == 0x78) {
        printf("Little-endian\n");
    }
    else if (*p == 0x12) {
        printf("Big-endian\n");
    }
    else {
        printf("Unknown endianness\n");
    }

    return 0;
}