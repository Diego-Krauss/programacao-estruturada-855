#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void limpabuffer(void);
void cabecalho(void);

int main() 
{
    
void limpabuffer(void) // Funcao para limpar o buffer do teclado (Usar sempre apos o SCANF)

{
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cabecalho (void)
{
    printf ("\n----------------------------------------------------------------------\n");
    printf ("#                        CADASTRO DE USUARIOS                        #\n");
    printf ("----------------------------------------------------------------------\n\n");
}
    char nome[50];
    char endereco[50];
    char data[15];
    char cpf[15];
    char resp;
    int rg, cnh, codigo, opcao;
    
    cabecalho();
    printf ("Para acessar a tela de cadastro tecle 'ENTER'... ");
    getch();
    //system ("clear");
   do
   {
        system ("clear");
        cabecalho();
        printf ("Nome completo ==> ");
        fgets (nome, 49, stdin);
        printf ("Endereco ==> ");
        fgets (endereco, 49, stdin);
        printf ("Identidade (Somente numeros) ==> ");
        scanf ("%d", &rg);
        limpabuffer();
        printf ("CPF (Somente numeros) ==> ");
        fgets (cpf, 14, stdin);
        printf ("CNH (Somente numeros) ==> ");
        scanf ("%d", &cnh);
        limpabuffer();
        printf ("Data de nascimento (Formato xx/xx/xx) ==> ");
        fgets (data, 14, stdin);
    
        printf ("Codigo do cliente (Somente numeros) ==> ");
        scanf ("%d", &codigo);
        limpabuffer();
        printf ("\n\n------------------------------------------------");
    
        printf("\nFinalizar Cadastro");
        printf("\n1 - Salvar");
        printf("\n2 - Cancelar\n");
        printf ("Opcao escolhida: ");
        scanf ("%d", &opcao);
        //limpabuffer();
    
        if (opcao == 1) {
            getch();
            system ("clear");
            cabecalho();
            printf(">>> Cadastro realizado com sucesso!\n\n");
            printf ("------------------------------------------------\n\n");
            printf("Nome: %s", nome);
            printf("Endereco: %s", endereco);
            printf("RG: %d\n", rg);
            printf("CPF: %d\n", cpf);
            printf("CNH: %d\n", cnh);
            printf("Nascimento: %s", data);
            printf("Codigo: %d\n\n", codigo);
            printf ("Deseja cadastrar um novo usuário? (s/n)? ");
            scanf ("%c", &resp);
            limpabuffer();
        } else if (opcao == 2) {
            getch();
            system ("clear");
            cabecalho();
            printf(">>> Cadastro cancelado!\n\n");
            printf ("------------------------------------------------\n\n");
            printf ("Deseja retornar a tela de cadastro? (s/n)? ");
            scanf ("%c", &resp);
            limpabuffer();
        } else {
            getch();
            system ("clear");
            cabecalho();
            printf(">>> Opcao desconhecida... Tente novamente! %d.\n\n", opcao);
            printf ("------------------------------------------------\n\n");
            printf ("Deseja retornar a tela de cadastro? (s/n)? ");
            scanf ("%c", &resp);
            limpabuffer();
        }
    } while (resp == 's');
    
    system ("clear");
    cabecalho();
    printf ("Encerrando aplicacao... \n\n");
}
