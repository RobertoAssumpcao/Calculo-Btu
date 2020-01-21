/*********************Cabe�alho**********************

Empresa:			UNISUAM
Curso:				Ciencia da Computacao
Disciplina:			Introducao a programacao
Projeto:			Calculadora de BTU�s
Autor:				Roberto de Paiva Assumpcao e Ingrid Odalis Pereira Hernandez
Data de criacao:	26/03/2019
Versao:				2.0

Descri��o:

Calcular a quantidade de BTU�s por metro quadrado.
***************************************************/

#include <stdlib.h>
#include <stdio.h>
#define SIZE_VECTOR 34

int main(int argc, char** argv) 
{	     
	int valores[] = {7500, 9000, 10000, 11500, 12000, 13000, 17000, 18000, 20000, 21000, 21500, 22000, 23000, 24000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 42000, 45000, 46000, 48000, 49000, 54000, 57000, 58000, 60000, 80000};
	char opcao;
	int valorc = 0;
	int a =0, np=0, ne=0, ils=0, ilss=0;
	int contador = 1;
	int nova = 0;
	int matrizA[3][3] = {0,0,7500,0,0,5000};
  	int i = 0;
	int j = 0;
	
	while (contador != 0)
	{
	printf("Menu:\n");
	printf("[1] - A area do comodo.\n");
	printf("[2] - Numero de pessoas.\n");
	printf("[3] - Maior incidencia de luz solar.\n");
	printf("[4] - Numero de eletrodomesticos no ambiente.\n");
	printf("[5] - Sair do programa.\n");
	printf("[6] - Resultado.\n");
	setbuf(stdin,NULL);
	scanf("%c", &opcao);
	
		
	switch(opcao)
	{
		case '1':
			printf("Digite a area do comodo: ");
			scanf("%d", &a);
			break;
			
		case '2':
			printf("Digite o numero de pessoas no comodo: ");
			scanf("%d", &np);
			break;
			
		case '3':
			printf("Maior incidencia de luz solar:\n");
			printf("[1] - Manha\n");
			printf("[2] - Tarde\n");
			scanf("%d", &ils);
			
			if(ils = 1)
			{
				ilss = 600;
			}		
			else
			{
				ilss = 800; 
			}			
			break;
			
		case '4':
			printf("Numero de eletrodomesticos: ");
			scanf("%d", &ne);
			break;
			
		case '5':
			printf("....Encerrando o programa");
			exit(0);
			break;	
			
		case '6':		
		if (np <= 2)
			{
				valorc =  ((a*ilss) + (ne*600));
			}			
		else
		{
			valorc =  ((a*ilss) + (np*600) + (ne*600));
		}		
		for(contador=0;contador<SIZE_VECTOR;contador++)
		{
			if(valorc<valores[contador])
			{
				nova = contador;
				contador = SIZE_VECTOR;
			}
		
		}
			printf ("voce precisa de um ar condicionado de %i Btus.\n",valores[nova]);
		printf (" %i\n",valorc);	
		break;
		getch();
	}
	}
return 0;
}


