#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int array[] = {};
	int i = 0;
	int count = 1;
	
	for(i = 1; i <= 10; i++){
		printf("Input %d:\n", i);
		count++;
		scanf("%d", &array[i]);
	}
	
	printf("The array:\n{");
	for(i = 1; i <= 9; i++){
		printf("%d, ", array[i]);
	}
	printf("%d }", array[10]);
	
	return 0;
}
