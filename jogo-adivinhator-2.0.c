#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	char resp;
	int result = 0;
	int cont = 0; 
	int flag = 0;
	
	printf("************************************************\n");
    printf("*                ADIVINHATOR 3.0               *\n");
    printf("************************************************\n");
	printf("\n");
	printf("Pense em um numero qualquer...\n");
	printf("\n");

	while (flag == 0) 
	{
		
		printf("Esse numero eh par? s/n = ");
		scanf(" %c", &resp);
		printf("Verificando possibilidades...\n\n");
		
		if(resp == 's') 
		{
		    printf("Divida o numero por 2.\n");
		    printf("---------------------------\n\n");
			cont++;
		}	
		else 
		{
			printf("Subtraia 1 e Divida o numero por 2.\n");
			printf("---------------------------\n\n");
		    printf("O numero e menor ou igual a 1? s/n = ");
			scanf(" %c", &resp);
			printf("Verificando possibilidades...\n\n");
			
			result += pow(2, cont);
			cont++;
			
				if(resp == 's') 
				{
					flag = 1;
				}
				
				else
				{
				    printf("Erro, informe uma resposta valida! (s/n)\n\n");
				}
		}
	}
	printf("***********************************************\n");
	printf("*       O numero que vc pensou foi... %d       *\n", result);
	printf("***********************************************\n\n");
	
	return 0;	
}
