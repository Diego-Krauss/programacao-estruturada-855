#include <stdio.h>
#include <stdlib.h>
#define max 15

int main() {
int v1[max];
int i, maior = NULL, menor = NULL;
	for (i=0;i<max;i++){
		printf("Digite um número :");
		scanf("%d",&v1[i]);
	if (i == 0){
		maior = v1[i];
		menor = maior;
    }else{
		if (v1[i] > maior){
			maior = v1[i];
		}else if (v1[i] < menor){
	menor = v1[i];
		}
	}
}
	printf("maior numero = %d, menor numero = %d\n",maior,menor);
	system("pause");
	return 0;
}

