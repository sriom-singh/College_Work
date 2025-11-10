#include <stdio.h>

int main(){

	int m1, s1, h1;
	int m2, s2, h2;
	int m, h, s;
	
	// Input first time
    	printf("Enter first time (HH MM SS): ");
   	scanf("%d %d %d", &h1, &m1, &s1);

    	// Input second time
    	printf("Enter second time (HH MM SS): ");
    	scanf("%d %d %d", &h2, &m2, &s2);

	// Display entered times
   	printf("\nFirst Time  : %02d:%02d:%02d", h1, m1, s1);
   	printf("\nSecond Time : %02d:%02d:%02d", h2, m2, s2);

	s = s1 + s2;
	m = m1 + m2+(s/60);
	h = h1 + h2 + (m/60);
	
	s = s % 60;
	m = m % 60;

	printf("\n\nAdded Time  : %02d:%02d:%02d\n", h, m, s);
	
	return 0 ;

}