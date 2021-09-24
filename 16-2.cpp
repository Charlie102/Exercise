#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int factorial(int n);
int main(){
	int n, factorial_2;
	printf("Enter value to n");
	scanf("%d", &n);
	factorial_2=factorial(n);
	printf("factorial of the num(%d)=(%d)\n", n,factorial_2);
}

int factorial(int n){
	int i, f=1;
	for(i=1; i<=n; i++){
		f=f*i;
	}
	return f;
}

