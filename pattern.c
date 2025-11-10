#include <stdio.h>

int main(){

	int n, i, j, k, l;
	
	printf("\nEnter the number: ");
	scanf("%d",&n);

	for(i = 1; i<=n; i++){

		for(k = 1; k<=n-i; k++){
			printf(" ");
		}
		 l = 69;
		for(j = 1; j<=(2*i)-1; j++){
		   printf("%c",l);
		   if(j<i){
			l--;
		    }
		    else{
			  l++;
			}
		}

		   printf("\n");
	}

	for(i = n-1; i>0; i--){
	
		for(k = 1; k<=n-i; k++){
			printf(" ");
		}
		l = 69;
		for(j = 1; j<=(2*i)-1; j++){
		   printf("%c",l);
		   if(j<i){
			l--;
		    }
		    else{
			  l++;
			}
		}

		   printf("\n");
	
	}


}