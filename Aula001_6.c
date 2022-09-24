#include<stdio.h>
main() {
	int idade;
	float salario;
	double quilosComPrecisao;
	char inicialNome;
	char nome[10];

	printf("Digite sua idade: ");
	scanf("%d",&idade);
	print("Digite seu salario: ");
	scanf("%f",&salario);
	printf("Digite seu peso com precisao: ");
	scanf("%e",&quilosComPrecisao);
	printf("Digite a inicial do seu nome: ");
	scanf("%c"; &inicialNome);
	printf("Digite seu nome: ");
	scanf("%s",nome);

	printf("======= Mostrando Dados =======\n");
	printf("Nome: %s \nIdade: %d \nSalario: %f \nPeso: %e \nInicial: %c",nome,idade,salario,quilosComPrecisao,inicialNome);

	system("pause");
}
