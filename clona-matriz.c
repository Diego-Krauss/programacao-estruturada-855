#include <stdio.h>
#include <conio.h>

int main()
{
    int matA[4][3], matB[4][3];
    int i, j;
    
    printf ("Declarando valores a Matriz A... ");
    getch();
    printf ("\n\n");
    
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("Digite o elemento [%d][%d] da Matriz A: ", i, j);
            scanf ("%d", &matA[i][j]);
            if (matA[i][j] > 0)
            {
                matB[i][j] = matA[i][j];
            }
            else
            {
                matB[i][j] = 0;
            }
        }
    }
    
    printf ("\n\n");
    
    printf ("Imprimindo Matriz A... ");
    getch();
    printf ("\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("%d\t", matA[i][j]);
        }
    printf ("\n");
    }
    
    printf ("\n\n");
    
    printf ("Copiando Matriz A para Matriz B, substituindo os numeros negativos por '0'... ");
    getch();
    printf ("\n");
    for (i=0; i<4; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("%d\t", matB[i][j]);
        }
    printf ("\n");
    }
    printf ("\n\n");

    return 0;
}
