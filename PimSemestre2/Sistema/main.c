#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>
    FILE *arq;
    int op;
    char criaBase[50];
void PerguntaCriaBdClientes(){

    conf();
    printf(" ATENÇÃO: Ao criar uma nova base todos os dados anteriores serão perdidos.\n\n ");
    printf(" DESEJA CRIAR UMA NOVA BASE DE DADOS DE CLIENTES [ s/n ] ? \n ");
    gets(criaBase);

    if( (strcmp(criaBase, "s") == 0 ) || (strcmp(criaBase, "S") == 0 ) ){
        arq = fopen("bd/Clientes/BD_Clientes.txt", "w");
    }

    VerificaBancoDeDados();

}

void PerguntaCriaBdFuncionarios(){

    conf();
    printf(" ATENÇÃO: Ao criar uma nova base todos os dados anteriores serão perdidos.\n\n ");
    printf(" DESEJA CRIAR UMA NOVA BASE DE DADOS DE FUNCIONÁRIOS [ s/n ] ? \n ");
    gets(criaBase);

    if( (strcmp(criaBase, "s") == 0 ) || (strcmp(criaBase, "S") == 0 ) ){
        arq = fopen("bd/Funcionarios/BD_Funcionarios.txt", "w");
    }

    VerificaBancoDeDados();

}

void PerguntaCriaBdPerfil(){

    conf();
    printf(" ATENÇÃO: Ao criar uma nova base todos os dados anteriores serão perdidos.\n\n ");
    printf(" DESEJA CRIAR UMA NOVA BASE DE DADOS DE PERFIL [ s/n ] ? \n ");
    gets(criaBase);

    if( (strcmp(criaBase, "s") == 0 ) || (strcmp(criaBase, "S") == 0 ) ){
        arq = fopen("bd/Perfil/BD_Perfil.txt", "w");
    }

    VerificaBancoDeDados();

}

void MensagemDeErroAbrirArquivo2(op){

    printf("[ ERRO ] NÃO FOI POSSÍVEL ABRIR A BASE DE DADOS \n\n\n");
    sleep(3);

    switch(op){

    case 1:
        PerguntaCriaBdClientes();
    break;

    case 2:
        PerguntaCriaBdFuncionarios();
    break;

    case 3:
        PerguntaCriaBdPerfil();
    break;

    default:
        printf("def");
    break;

    }

}

void conf(){
    system("color 0A");
    system("cls");
    printf("\n\n\n\n\n");
}

void Clientes(){

    conf();
    op = 1;
    arq = fopen("bd/Clientes/BD_Clientes.txt", "r");
    if (arq == NULL){
        MensagemDeErroAbrirArquivo2(op);
     }

}
void Funcionarios(){

    conf();
    op = 2;
    arq = fopen("bd/Funcionarios/BD_Funcionarios.txt", "r");
    if (arq == NULL){
        MensagemDeErroAbrirArquivo2(op);
     }

}
void Perfil(){

    conf();
    op = 3;
    arq = fopen("bd/Perfil/BD_Perfil.txt", "r");
    if (arq == NULL){
        MensagemDeErroAbrirArquivo2(op);
     }

}

void VerificaBancoDeDados(){

    conf();
    printf(" VERIFICANDO BASE DE DADOS, AGUARDE... \n\n ");
    sleep(1);

    Clientes();
    printf(" BASE DE DADOS DE CLIENTES \n ");
    printf("[========================== [ 26%% ]                                              ] \n\n ");
    sleep(2);

    Funcionarios();
    printf(" BASE DE DADOS DE FUNCIONÁRIOS \n ");
    printf("[=================================================== [ 52%% ]                     ] \n\n ");
    sleep(2);

    Perfil();
    printf(" BASE DE DADOS DE PERFIS \n ");
    printf("[====================================================================== [ 98%% ]  ] \n\n ");
    sleep(2);
    system("cls");

}
int main()
{
    Config();
    VerificaBancoDeDados();
    TopoSistema();
    int menu;
    char ConsultaDeDados[100] = "BD_Clientes.txt";

    ConfigCodMenu();

    printf("| CLIENTES\n");
    printf("| \t1 - NOVO\n");
    printf("| \t2 - CONSULTAR\n");
    printf("| \t3 - ALTERAR\n");
    printf("| \t4 - EXCLUIR\n");
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| FORNECEDORES\n");
    printf("| \t5 - NOVO\n");
    printf("| \t6 - CONSULTAR\n");
    printf("| \t7 - ALTERAR\n");
    printf("| \t8 - EXCLUIR\n");
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| PERFIL\n");
    printf("| \t9 - NOVO\n");
    printf("| \t10 - CONSULTAR\n");
    printf("| \t11 - ALTERAR\n");
    printf("| \t12 - EXCLUIR\n");
    printf("+-----------------------------------------------------------------------------------+\n");

    scanf("%i",&menu);

    switch(menu){

    case 1:
        CadastroDeClientes();
    break;
    case 2:
        //ConsultaDeClientes();
    break;
    case 3:
        printf("3");
    break;
    case 4:
        printf("4");
    break;
    case 5:
        printf("5");
    break;
    case 6:
        printf("6");
    break;
    case 7:
        printf("7");
    break;
    case 8:
        printf("8");
    break;
    case 9:
        printf("9");
    break;
    case 10:
        printf("10");
    break;
    case 11:
        printf("11");
    break;
    case 12:
        printf("12");
    break;
    default:
        system("cls");
        TopoSistema();
        printf("\n|||| OPÇÃO INVÁLIDA |||\n\n");
        Menu();
    break;

    }

    // RODAPE
    printf("\n\n\n");
    system("pause");
    getch();

    return 0;
}
