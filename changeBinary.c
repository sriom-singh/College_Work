#include <stdio.h>

int main() {
    int num, binary[32], i = 0, temp, j;
    

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Printing directly using format specifiers
    printf("\nDecimal     : %d", num);
    printf("\nBinary      : ");

    // Binary conversion (manual method)
    temp = num;
    if (temp == 0) {
        printf("0");
    } else {
        while (temp > 0) {
            binary[i] = temp % 2;
            temp /= 2;
            i++;
        }
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    printf("\nOctal       : %o", num);
    printf("\nHexadecimal : %X\n", num);

    return 0;
}
