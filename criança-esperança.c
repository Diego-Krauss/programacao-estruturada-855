#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Cabecalho();
    
int main ()
{

  int opcao;
  float doacao;
  char escolha, resp;
  
void Cabecalho ()
{
    printf ("\n");
    printf ("---------------------------------------------------------\n");
    printf ("|                      BEM VINDO AO                     |\n");
    printf ("|                   CRIANCA ESPERANCA...                |\n");
    printf ("---------------------------------------------------------\n\n");
}

    Cabecalho();
    printf ("\t");
    printf ("Aperte 'Enter', para fazer sua doacao... ");
    getch ();
    printf ("\n\n");
    system ("clear");	//Limpa Tela
      
    Cabecalho();
    printf ("\t");
    printf (">>> Digite a Opcao desejada: \n");
    printf ("-----------------------------\n\t");
    printf ("    Para doar R$5.00......Digite: 1\n\t");
    printf ("    Para doar R$7.00......Digite: 2\n\t");
    printf ("    Para doar R$10.00.....Digite: 3\n\t");
    printf ("    Para doar R$15.00.....Digite: 4\n\t");
    printf ("    Para doar R$30.00.....Digite: 5\n\t");
    printf ("    Para doar R$50.00.....Digite: 6\n\t");
    printf ("    Para sair.............Digite: 0\n");
    printf ("-----------------------------\n\t");
    printf (">>> Opcao: ");
    scanf ("%d", &opcao);
  
    switch (opcao) 
    {
        case 1:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$5,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$5,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 2:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$7,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$7,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 3:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$10,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$10,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 4:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$15,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$15,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 5:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$30,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$30,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 6:
            system ("clear");		//Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Confirma a doacao de R$50,00 (s/n) ? ");
            scanf ("%s", &resp);
            if (resp == 's')
            {
                printf ("\n\n\t");
                printf ("Voce doou R$50,00 ao CRIANCA ESPERANCA! Obrigado por nos ajudar! ");
                printf ("\n");
            }
            else
            {
                printf ("\n\n\t");
                printf ("Doacao CANCELADA!!! Obrigado pela visita! ");
                printf ("\n");
            }
            break;
        case 0:
            system ("clear");		//Limpa Tela
            printf ("\n");
            printf ("---------------------------------------------------------\n");
            printf ("|                 CRIANCA ESPERANCA 2018                |\n");
            printf ("|                     ATE A PROXIMA!                    |\n");
            printf ("---------------------------------------------------------\n\n");
            printf ("\t");
            printf (">>> Encerrando aplicacao... ");
            getch ();         
            getch ();
            printf ("\n\n\t");
            printf ("Obrigado pela visita! ");
            printf ("\n");
            break;
        default :
            system ("clear");       //Limpa Tela
            Cabecalho();
            printf ("\t");
            printf (">>> Opcao invalida! Tente novamente! ");
            printf ("\n");
            getch ();
    }
    
  return 0;
}
