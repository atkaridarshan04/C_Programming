#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32]; // Assuming a 32-bit binary representation
    int index = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    // Print binary representation in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {

    int decimal = 5;

    decimalToBinary(decimal);

    return 0;
}
