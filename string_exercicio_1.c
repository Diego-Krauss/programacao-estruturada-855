#include <stdio.h>
#include <stdlib.h>
#define max 10
bool numeroPrimo(int numero){
bool ehPrimo = false;
	if (numero <= 1 || (numero != 2 && numero % 2 == 0))
		ehPrimo = false;
	else
		ehPrimo = true;
int d = 3;
	while (ehPrimo && d <= numero / 2) {
		if (numero % d == 0)
			ehPrimo = false;
			d = d + 2;/* testamos so' os impares: 3, 5, 7... */
		}
	return ehPrimo;
	}
int main() {
int v1[max];
int i;
	for (i=0;i<max;i++){
		printf("Digite um número :");
		scanf("%d",&v1[i]);
	if (numeroPrimo(v1[i])){
		printf("sou numero primo %d estou na posicao %d
	do vetor \n",v1[i],i);
	};
}
	system("pause");
	return 0;
}
