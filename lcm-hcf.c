#include <stdio.h>

int main(){

	int num1, num2, a, b, temp, lcm, hcf;
	
	printf("\nEnter two numbers: ");
	scanf("%d %d",&a,&b);
	
	num1 = a;
	num2 = b;
	
	while(b!=0){
		temp = b;
		b = a % b;
		a = temp; 
	}
	hcf = a;
	lcm = (num1*num2)/hcf;
	printf("\nHCF of %d and %d = %d", num1, num2, hcf);
    	printf("\nLCM of %d and %d = %d\n", num1, num2, lcm);
	return 0;

}