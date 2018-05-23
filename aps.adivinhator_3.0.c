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
		
		printf("Esse numero eh par? s/n = ");
		scanf(" %c", &resp);
		printf("Verificando possibilidades...\n\n");
		
		if(resp == 's') {
		    printf("Divida o número por 2.\n");
		    printf("---------------------------\n\n");
			cont++;
		}	
		else 
		{
			printf("Esse numero eh impar? s/n = ");
			scanf(" %c", &resp);
			printf("Verificando possibilidades...\n\n");
			
			if(resp == 's') 
			{
			    printf("Subtraia 1 e Divida o número por 2.\n");
			    printf("---------------------------\n\n");
				printf("O numero é menor ou igual a 1? s/n = ");
				scanf(" %c", &resp);
				printf("Verificando possibilidades...\n\n");
				
				if(resp == 's') {
					flag = 1;
				}
				
				result += pow(2, cont);
				cont++;
			} 
			else {
				printf("Erro, informe uma resposta valida! (s/n)\n\n");
			}		
		}
	}
	printf("------------------------------\n");
	printf("O numero que vc pensou é: %d\n", result);
	printf("------------------------------\n\n");
	system("pause");
	return 0;	
}
