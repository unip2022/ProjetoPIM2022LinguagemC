#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void salva(nomeCli,cpf,email,endereco,numero,cep,cidade,estado){

        FILE *arq;

        // ABRE ARQUIVO
        arq = fopen("bd_clientes.txt", "a");
        if (arq == NULL)
        {
         printf("Problemas na abertura do arquivo\n");
         return;
        }

        //printf(" %s |  %s |  %s |  %s |  %s |  %s |  %s |  %s \n",nomeCli,cpf,email,endereco,numero,cep,cidade,estado);

        fprintf(arq , " %s | ",nomeCli);
        fprintf(arq , " %s | ",cpf);
        fprintf(arq , " %s | ",email);
        fprintf(arq , " %s | ",endereco);
        fprintf(arq , " %s | ",numero);
        fprintf(arq , " %s | ",cep);
        fprintf(arq , " %s | ",cidade);
        fprintf(arq , " %s | ",estado);
        fputs("\n", arq);

        for(int x = 50 ; x < 100 ; x++){
            system("cls");
            printf("\n\n\n");
            printf("SALVANDO... [ %i % ]",x);
        }

        fclose(arq);

}


int CadastroClientes(){

    //FILE *arq;
    char Linha[100];
    char *result;
    char null[100] = "";
    char nomeCli[100] = "";
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
        printf("| INFORME OS DADOS DO CLIENTES \n");
        gets(null);
        printf("+-----------------------------------------------------------------------------------+\n");
        printf("| NOME: ");
        gets(nomeCli);
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

                salva(nomeCli,cpf,email,endereco,numero,cep,cidade,estado);

            break;

            case 2:

                printf("CANCELADO PELO USUARIO");

            break;

            default:
                printf("NENHUMA OPÇÃO");
            break;

        }


    printf("\n\n\n");
    system("pause");
    Menu();
}
