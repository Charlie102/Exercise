#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(){
	int a, b, product;
	printf("Enter a and b: \n");
	scanf("%d %d", &a, &b);
	
	product=a*b;
	if(product<=100){
		printf("\n Product is less than or equal to 100");
	}else{
		printf("\n More  than 100");
	}
	return 0;
}

