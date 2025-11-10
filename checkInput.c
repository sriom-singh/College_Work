#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9') {
        printf("Input is a Digit\n");
    }
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("Input is an Alphabet\n");
    }
    else {
        printf("Input is a Special Symbol\n");
    }

    return 0;
}
