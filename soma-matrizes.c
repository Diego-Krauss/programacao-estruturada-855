/*Armazenando Valores*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 3

int main ()
{
  int mat1[max][max];
  int mat2[max][max];
  int mat3[max][max];
  int lin, col;

    printf ("\n----------------------------------------------------------------------------\n");
    printf ("|                        SOMA ENTRE DUAS METRIZES 3X3                      |\n");
    printf ("----------------------------------------------------------------------------\n\n");
    printf (">>> Iniciando a MATRIZ_1... ");
    getch();
    printf ("\n\n");
    
/*Inserindo Valores*/
    for (lin = 0; lin <= max - 1; lin++)
    {
        for (col = 0; col <= max - 1; col++)
    	{
            printf ("Digite o elemento (%d, %d): ", lin, col);
            scanf ("%d", &mat1[lin][col]);
	    }
    }

/*Lendo Valores*/
    printf ("\nImprimindo MATRIZ_1\n\n");
    for (lin = 0; lin <= max - 1; lin++)
    {
        for (col = 0; col <= max - 1; col++)
    	{
	        printf (" %d ", mat1[lin][col]);
	    }
    printf ("\n");
    }
    printf ("----------------------------------------------------------------------------\n\n");
    
    
    printf (">>> Iniciando a MATRIZ_2... ");
    getch();
    getch();
    printf ("\n\n");
    
/*Inserindo Valores*/
    for (lin = 0; lin <= max - 1; lin++)
    {
        for (col = 0; col <= max - 1; col++)
    	{
	        printf ("Digite o elemento (%d, %d): ", lin, col);
	        scanf ("%d", &mat2[lin][col]);
	    }
    }

/*Lendo Valores*/
    printf ("\nImprimindo MATRIZ_2... \n\n");
    for (lin = 0; lin <= max - 1; lin++)
    {
        for (col = 0; col <= max - 1; col++)
    	{
	        printf (" %d ", mat2[lin][col]);
	    }
    printf ("\n");
    }
    printf ("----------------------------------------------------------------------------\n\n");
    
    
    printf (">>> Calculando a soma entre as MATRIZES 1 e 2... ");
    getch();
    getch();
    printf ("\n\n");

/*Somando os valores das duas matrizes*/
    printf ("Imprimindo MATRIZ_3... \n\n");
    for (lin = 0; lin <= max - 1; lin++)
    {
            for (col = 0; col <= max - 1; col++)
    	    {
    	    mat3[lin][col] = mat1[lin][col] + mat2[lin][col];
    	    printf (" %d ", mat3[lin][col]);
        	}
    printf ("\n");
    }
    printf ("\n");


  return 0;
}


