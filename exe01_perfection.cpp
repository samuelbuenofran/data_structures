#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Printing special characters
#include <wchar.h>
#include <locale.h>

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
	printf("%d }\n", array[10]);
	
	for(i = 1; i <= 10; i++){
		if(array[i] % 2 == 0){
			printf("Element at position array[%d] is even.\n", array[i]);
		}
	}
	
	
	
	return 0;
}
