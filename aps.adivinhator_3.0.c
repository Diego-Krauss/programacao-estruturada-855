#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char resp;
	int result = 0;
	int cont = 0, flag = 0;
	
	printf("*************** ADIVINHATOR 3.0 ***************");
	printf("\n");
	printf("\n");
	printf("Pense em um numero qualquer...\n");
	printf("\n");

	while (flag == 0) {
		
		printf("Esse numero eh par? S/N = ");
		scanf(" %c", &resp);
		printf("Verificando possibilidades...\n\n");
		
		if(resp == 'S') {
			cont++;
		}	
		else 
		{
			printf("Esse numero eh impar? S/N = ");
			scanf(" %c", &resp);
			printf("Verificando possibilidades...\n\n");
			
			if(resp == 'S') 
			{
				printf("O numero eh 1? S/N = ");
				scanf(" %c", &resp);
				printf("Verificando possibilidades...\n\n");
				
				if(resp == 'S') {
					flag = 1;
				}
				
				result += pow(2, cont);
				cont++;
			} 
			else {
				printf("Erro, informe uma resposta valida! (S/N)\n\n");
			}		
		}
	}
	
	printf("O numero que vc pensou eh: %d\n", result);
	system("pause");
	return 0;	
}

