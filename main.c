#include <stdio.h>

int main() {
    unsigned int pc_value;

    asm volatile (
        "adr %0, address\n"
        "address:\n"
        : "=r" (pc_value)
    );
    printf("PC value: 0x%X\n", pc_value);

    return 0;
} 
