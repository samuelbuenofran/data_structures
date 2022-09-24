#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int array[] = {};
	int i = 0;
	
	for(i = 1; i <= 10; i++){
		printf("Input %d: ", i);
		scanf("%d", &array[i]);
	}
	
	return 0;
	
}