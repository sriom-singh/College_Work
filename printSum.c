#include <stdio.h>
#include <math.h>

// Function to compute factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    double sum1 = 0, sum2 = 0, sum3 = 0;

    // Input number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Series i: S = 1 + 2^2/2! + 3^3/3! + ...
    for (int i = 1; i <= N; i++) {
        sum1 += pow(i, i) / (double)factorial(i);
    }

    // Series ii: S = 1 + 2/2! + 3^2/3! + 4^3/4! + ...
    for (int i = 1; i <= N; i++) {
        sum2 += pow(i, i - 1) / (double)factorial(i);
    }

    // Series iii: S = 1 - 2! + 3! - 4! + ...
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)   // even terms subtract
            sum3 -= factorial(i);
        else              // odd terms add
            sum3 += factorial(i);
    }

    // Print results
    printf("\nResults for first %d terms:\n", N);
    printf("i)   S = %.2f\n", sum1);
    printf("ii)  S = %.2f\n", sum2);
    printf("iii) S = %.2f\n", sum3);

    return 0;
}
