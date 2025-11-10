#include <stdio.h>

int main() {
    int s1, s2, s3, obt, scholarship;
    float perc, net_amt;
    int m1, m2, m3, m4, m5, total5;
    float perc5;

    // First Part: Scholarship Calculation
    printf("Enter marks in 3 subjects (out of 100): ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if ((s1 < 0 || s1 > 100) || (s2 < 0 || s2 > 100) || (s3 < 0 || s3 > 100)) {
        printf("Invalid marks entered!\n");
        return 0;
    }

    obt = s1 + s2 + s3;
    perc = (obt / 300.0) * 100;

    printf("\nPercentage = %.2f\n", perc);

    if (perc < 50)
        scholarship = 0;
    else if (perc <= 60)
        scholarship = 5;
    else if (perc <= 74)
        scholarship = 20;
    else if (perc <= 84)
        scholarship = 30;
    else
        scholarship = 50;

    net_amt = 125000 - ((scholarship / 100.0) * 125000);

    printf("Scholarship = %d%%\n", scholarship);
    printf("Net Amount Payable = Rs. %.2f\n", net_amt);

    // Second Part: Grade Calculation
    printf("\nEnter marks of 5 subjects (out of 100): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if ((m1 < 0 || m1 > 100) || (m2 < 0 || m2 > 100) || 
        (m3 < 0 || m3 > 100) || (m4 < 0 || m4 > 100) || 
        (m5 < 0 || m5 > 100)) {
        printf("Invalid marks entered!\n");
        return 0;
    }

    total5 = m1 + m2 + m3 + m4 + m5;
    perc5 = (total5 / 500.0) * 100;

    printf("Percentage in 5 subjects = %.2f\n", perc5);

    if (perc5 >= 85)
        printf("Grade: A\n");
    else if (perc5 >= 75)
        printf("Grade: B\n");
    else if (perc5 >= 61)
        printf("Grade: C\n");
    else if (perc5 >= 51)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}
