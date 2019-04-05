#include <stdio.h>

int fatorial (int num)
{
    int res;
    
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        res = num * fatorial (num-1);
        return res;
    }
}

int soma (int num)
{
    int res;
    
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        res = num + soma (num-1);
        return res;
    }
}

void menu (void)
{
    printf ("\n=====================================================\n");
    printf ("|                   MENU DE OPCOES                  |\n");
    printf ("=====================================================\n");
    printf ("|                                                   |\n");
    printf ("| ( 0 ) -> SAIR                                     |\n");
    printf ("| ( 1 ) -> CALCULAR FATORIAL                        |\n");
    printf ("| ( 2 ) -> SOMA DE TERMOS                           |\n");
    printf ("|                                                   |\n");
    printf ("=====================================================\n\n");
}

int main() {
    
    int n, continuar = 1;
    
    do
    {  
        
    menu();
    
    printf (">>> Digite a opcao desejada: ");
    scanf ("%d", &continuar);
    printf ("\n");
    
   
        if (continuar == 1) 
        {
            printf ("Digite um numero inteiro maior que zero: ");
            scanf ("%d", &n);
            printf ("\n>>> O fatorial do numero %d = %d", n, fatorial(n));
        }
        else if (continuar == 2)
            {
                printf ("Digite um numero inteiro maior que zero: ");
                scanf ("%d", &n);
                printf ("\n>>> A soma de 1 a %d = %d", n, soma(n));
            }
            else if (continuar > 2)
            {
                printf ("Opcao invalida! Escolha uma opcao correta... ");
            }
            else 
                printf ("Aplicação encerrada...!");
                printf ("\n\n");
                
    } while (continuar);
    
    
    return 0;
}

