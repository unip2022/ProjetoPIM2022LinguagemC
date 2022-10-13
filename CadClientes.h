#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>



int CadastroClientes(){

    //FILE *arq;
    char Linha[100];
    char *result;
    char nome[100] = "";
    char cpf[100] = "";
    char email[100] = "";
    char endereco[100] = "";
    char numero[100] = "";
    char cep[100] = "";
    char cidade[100] = "";
    char estado[100] = "";
    int salvar;
    int i;

    system("cls");
    TopoMenu();
    printf("\n\n");

        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| Nome: ");
        gets(nome);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| CPF: ");
        gets(cpf);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| E-MAIL: ");
        gets(email);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| ENDEREÇO: ");
        gets(endereco);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| NUMERO: ");
        gets(numero);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| CEP: ");
        gets(cep);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| CIDADE: ");
        gets(cidade);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| ESTADO: ");
        gets(estado);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("\n\n");
        printf("Deseja salvar? 1-SIM / 2-NÃO \n");
        scanf("%i",&salvar);

        printf("\n\n");

        switch(salvar){

            case 1:

                for(int x = 50 ; x < 100 ; x++){
                    system("cls");
                    printf("\n\n\n");
                    printf("SALVANDO... [ %i % ]",x);
                }

            break;

            case 2:

                printf("CANCELADO PELO USUARIO");

            break;

            default:
                printf("NENHUMA OPÇÃO");
            break;

        }

        /*
        // Abre um arquivo TEXTO para LEITURA
        arq = fopen("bd_usuarios.txt", "rt");
        if (arq == NULL)  // Se houve erro na abertura
        {
         printf("Problemas na abertura do arquivo\n");
         return;
        }

        i = 1;
        while (!feof(arq))
        {
        // Lê uma linha (inclusive com o '\n')
          result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
          if (result)  // Se foi possível ler
          //printf("Linha %d : %s",i,Linha);
          printf("%s",Linha);
          i++;
        }
        fclose(arq);
        */

    printf("\n\n\n");
    system("pause");
    Menu();
}
