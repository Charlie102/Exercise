#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	int a = 100;
	
	while(a >= 5){
		printf("%3d", a); a-=5;
	}	
	return 0;
}

