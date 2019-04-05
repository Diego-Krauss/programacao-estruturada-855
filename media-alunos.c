#include <stdio.h>
#include <conio.h>

void limpabuffer(void) // Funcao para limpar o buffer do teclado (Usar sempre apos o SCANF)
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cabecalho(void)
{
    printf ("\n----------------------------------------------------------------------\n");
    printf ("|                  CENTRO UNIVERSITARIO UNICARIOCA                   |\n");
    printf ("----------------------------------------------------------------------\n\n");
}


int main()
{
    struct media {
        char nome [50];
        float av1;
        float av2;
        float av3;
    };
    
    int i;
    float media;
    
    typedef struct media med;
    med vetor[5];
    
    cabecalho();
    printf ("Bem vindo ao portal... Para acessar o cadastro de notas tecle 'ENTER'... ");
    getch();
    system ("clear"); // Limpa tela
    
    cabecalho();
    
    for (i=0; i<5; i++)
    {
        printf ("Digite o nome do aluno: ");
        fgets (vetor[0].nome, 50, stdin);
        vetor[0].nome [strlen(vetor[0].nome) - 1] = '\0'; // Comando usado para remover o '\n' da string lida pelo fgets.
        
        printf ("Informe a primeira nota: ");
        scanf ("%f", &vetor[0].av1);
        limpabuffer();
        
        printf ("Informe a segunda nota: ");
        scanf ("%f", &vetor[0].av2);
        limpabuffer();
        
        printf ("Informe a terceira nota: ");
        scanf ("%f", &vetor[0].av3);
        limpabuffer();
        
           if (vetor[0].av1 < vetor[0].av2 && vetor[0].av1 < vetor[0].av3) 
           {
            media = (vetor[0].av2 + vetor[0].av3) / 2;
           } 
           else if (vetor[0].av2 < vetor[0].av1 && vetor[0].av2 < vetor[0].av3) 
           {
            media = (vetor[0].av1 + vetor[0].av3) / 2;
           } 
           else 
           {
            media = (vetor[0].av1 + vetor[0].av2) / 2;
           }
    
       printf("\n>>> O aluno %s teve média = %.1f e foi %s\n", vetor[0].nome, media, (media < 7) ? "Reprovado!" : "Aprovado!");
       printf ("\n----------------------------------------------------------------------\n\n");
    }
    
    return 0;
}


