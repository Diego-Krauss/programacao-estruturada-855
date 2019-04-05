#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(int argc, char *argv[]){
int i, num=0;
char cond[1000][6];
char cond2[4];

setlocale(LC_ALL, "");

printf("***********************************************\n");
printf("*               ADIVINHATOR 3.0               *\n");
printf("***********************************************\n");
printf("\n");
printf("Pense em um numero qualquer...\n");
printf("\n");

setlocale(LC_ALL,"");

    for(i=0; ;i++){
        printf("O numero pensado eh par ou impar? ");
        scanf("%s", cond[i]);
        if(strcmp(cond[i],"par")==0){
            printf("Divida por 2\n\n");
        }
            if(strcmp(cond[i],"impar")==0){
                printf("Esse numero eh menor ou igual a 1? ");
                scanf("%s", cond2);
                if(strcmp(cond2,"sim")==0){

                break;
                }
            else{
                printf("Subtraia 1\n\n");
            }
        }
    }

    for( ;i>=0;i--){
        if(strcmp(cond[i],"par")==0){
            num=num*2;
        }
        if(strcmp(cond[i],"impar")==0){
            num=num+1;
        }
    } 
printf("\n");
printf("***********************************************\n");
printf("*          O numero pensado foi...%d          *\n",num);
printf("***********************************************\n\n");

return 0;

}
