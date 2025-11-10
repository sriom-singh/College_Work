#include <stdio.h>

int main() {
    int n, count = 0, num , original = 1, reversed, digit;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d palindrome numbers are:\n", n);

    while (count < n) {
	num = original ;
 	reversed = 0;

    	while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    	}
  
        if (original == reversed) {
            printf("%d ", original);
            count++;
        }
        original++;
    }
    return 0;
}
