#include <stdio.h>

int main() {
    int num, digit, rev = 0, i = 0;


    // Input number
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero\n");
        return 0;
    }

    // Extract digits and store in reverse order
    while (num > 0) {
        digit = num % 10;
        rev = rev*10 + digit;
        num /= 10;
    }
     while (rev > 0) {
        digit = rev % 10;

	if(digit==0)
		printf("Zero ");
	else if(digit==1)
		printf("One ");
	else if(digit==2)
		printf("Two ");
	else if(digit==3)
		printf("Three ");
	else if(digit==4)
		printf("Four ");
	else if(digit==5)
		printf(" Five ");
	else if(digit==6)
		printf("Six ");
	else if(digit==7)
		printf("Seven ");
	else if(digit==8)
		printf("Eight ");
	else if(digit==9)
		printf("Nine ");

        rev /= 10;
    }


    return 0;
}
