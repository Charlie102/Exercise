#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a, b;
	
	printf("Nhap 2 so a va b: \n");
	scanf("%d %d", &a, &b);
	
	if(a%b==0){
		printf("true");
	} else {
		printf("false");
	}
	return 0;
}

