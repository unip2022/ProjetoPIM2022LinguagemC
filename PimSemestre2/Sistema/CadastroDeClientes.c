#include <stdio.h>
#define TAM 100

FILE *arq;
int cont = 0;
int retorno;
int qtd = 0;

typedef struct Cliente{
        char nome[100];
        char email[100];
        char fone[15];
}cadastro;
cadastro max[TAM];


void abreArquivoDeDados(){
    char op = 's';

    arq = fopen("bd/Clientes/BD_Clientes.txt", "a");
    if (arq == NULL){
        MensagemDeErroAbrirArquivo();
     }else{

        while ((cont < TAM) && (op == 's')){
        system("color F0");

        printf ("\n Digite o nome: ");
        gets(max[cont].nome);
        printf ("\n Digite o E-mail: ");
        gets(max[cont].email);
        printf ("\n Digite o numero: ");
        gets(max[cont].fone);

            if ( (strcmp(max[cont].nome, "") == 0 ) || (strcmp(max[cont].email, "") == 0 ) || (strcmp(max[cont].fone, "") == 0 ) ){

                system("color 4F");
                printf("\n");
                printf("+-----------------------------------------------------------------------------------+\n");
                printf("| TODOS OS CAMPOS SÃO OBRIGATÓRIOS, O CLIENTE NÃO FOI INSERIDO, TENTE NOVAMENTE     |\n");
                printf("+-----------------------------------------------------------------------------------+\n");
                op = ConfirmaAddClientes();

            }else{

                fprintf(arq , "%s|",max[cont].nome);
                fprintf(arq , "%s|",max[cont].email);
                fprintf(arq , "%s\n",max[cont].fone);

                cont++;
                op = ConfirmaAddClientes();
                qtd++;

            }

        }

     }

     fclose (arq);

}

void CadastroDeClientes(){


    ConfigModulos();
    system("cls");

    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| CADASTRO DE CLIENTES                                                              |\n");
    printf("+-----------------------------------------------------------------------------------+\n");

    printf("\n\n");

    abreArquivoDeDados();
    TopoSistema();
    Menu();

}
