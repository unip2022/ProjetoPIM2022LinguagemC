#include <stdio.h>
#define TAM 100

FILE *arq;
int cont;
int qtd;

typedef struct Cliente{
        char nome[50];
        char email[50];
        char fone[15];
        char ativo[2];
}cadastro;
cadastro max[TAM];

void abreArquivoConsutaClientes(){

    char c,split[1000];
    int i = 0 , x = 1 , retorno;
    char nome[50] = "";

    arq = fopen("bd/Clientes/BD_Clientes.txt", "r");
    if (arq == NULL){
        MensagemDeErroAbrirArquivo();
     }else{


            system("color F0");

            printf (" PARA PESQUISAR DIGITE UM NOME OU 0 PARA MOSTRAR TODOS: ");// para procurar contato pelo nome
            scanf("%s",&nome);

            if ( strcmp(nome, "0") == 0 ){

                // MOSTRA TODSOS
                retorno = fread(&max[i], sizeof(cadastro), 1, arq);
                while (retorno == 1){

                  if( strcmp(max[i].ativo, "s") == 0 ){
                      printf("\n # %i",x);
                      printf("\n Nome....: %s",max[i].nome);
                      printf("\n E-mail..: %s",max[i].email);
                      printf("\n Fone....: %s",max[i].fone);
                      printf("\n Ativo...: %s",max[i].ativo);
                      printf("\n+-----------------------------------------------------------------------------------+");
                  }
                      i++;
                      x++;
                      retorno = fread(&max[i], sizeof(cadastro), 1, arq);
                }
                // MOSTRA TODSOS

            }else{

                 retorno = fread(&max[i], sizeof(cadastro), 1, arq);
                 while (retorno == 1){
                     if (strcmp(nome, max[i].nome) == 0 && strcmp(max[i].ativo, "s") == 0){
                        printf("\n+-----------------------------------------------------------------------------------+");
                        printf("\n+------------------------- RESULTADO DA BUSCA --------------------------------------+");
                        printf("\n+-----------------------------------------------------------------------------------+");
                        printf("\n Nome....: %s",max[i].nome);
                        printf("\n E-mail..: %s ",max[i].email);
                        printf("\n Fone....: %s",max[i].fone);
                        printf("\n Ativo...: %s",max[i].ativo);
                        cont++;
                     }
                 i++;
                 retorno = fread(&max[i], sizeof(cadastro), 1, arq);
                 }

                 if(cont == 0){
                        system("color 4F");
                        printf("\n+-----------------------------------------------------------------------------------+");
                        printf("\n+------------------------- NENHUM REGISTRO ENCONTRADO ------------------------------+");
                        printf("\n+-----------------------------------------------------------------------------------+");

                        getch();
                 }

                 getch();

            }
            //printf(" \n\n %d Contatos salvos!\n ", i);
            getch();
            fclose(arq);

     }
}

void ConsultaDeClientes(){

    ConfigModulos();
    system("cls");

    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| CONSULTAR DADOS DE CLIENTES                                                       |\n");
    printf("+-----------------------------------------------------------------------------------+\n");

    printf("\n\n");

    abreArquivoConsutaClientes();
    TopoSistema();
    Menu();


    /*
    arq = fopen("BD_Clientes.txt", "r");
    if (arq == NULL){
       printf ("Erro!\nO arquivo da lista não pode ser aberto!\n");
       getch();
       exit(1);
    }

    retorno = fread(&max[i], sizeof(contatos), 1, arq);//fread le apenas 1 contato do arquivo
    while (retorno == 1){ //o retorno recebe a quantidade de contatos lidos no fread
      printf("\n Nome....: %s",max[i].nome);
      printf("\n Fone....: %s",max[i].fone);
      printf("\n E-mail..: %s\n",max[i].email);
      i++;
      retorno = fread(&max[i], sizeof(contatos), 1, arq);//fread vai ler o proximo contato
    }
    printf(" \n\n %d Contatos salvos!\n ", i);
    getch();//espera que o usuário pressione uma tecla
    fclose(arq);//fecha o arquivo agenda.txt
    */

}
