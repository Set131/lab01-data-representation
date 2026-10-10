#include <stdio.h>

void inspect_char(char c)
{
    printf("Character: %c | Decimal: %3d | Hex: 0x%02X\n", c, c, (unsigned char)c);
}

int main(void)
{
    inspect_char('A');
    inspect_char('B');
    inspect_char('a');
    inspect_char('0');
    inspect_char('9');
    return 0;
}
