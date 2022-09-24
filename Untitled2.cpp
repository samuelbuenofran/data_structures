#include<stdio.h>

main() {
	int i;
	printf("informe sua idade: ");
	scanf("%d",&i);

	if(i>=0 && i>120) {
		printf("idade invalida")
		else if(i>70) {
			printf("idoso");
		} else {

			if(i>21) {
				printf("adulto");
			} else if(i<=21) {
				printf("adolecente");
			} else if(i<12) {
				printf("criança");
			} else if(i<=0) {
				printf("bebe");
			}
		}
	}

}

