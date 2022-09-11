#include <locale.h>
int Menu(){
    char menu[61];
    system("cls");
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| NOME DA EMPRESA - Menu                                                            |\n");
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("| ESCOLHA UMA OPCAO                                                                 |");
    printf("+-----------------------------------------------------------------------------------+\n");
    printf("\n 1 - CADASTRO CLIENTES \n 2 - CADASTRO DE FUNCIONARIOS \n 3 - CADASTRO DE PERFIL \n 4 - SAIR ");

    printf("\n\nDigite sua escolha: ");
    scanf("%s",menu);
    printf("\nSua escolha: %s",menu);


    if( strcmp(menu, "1") == 0){
        CadastroClientes();
    }

    if( strcmp(menu, "2") == 0){
        CadastroFuncionarios();
    }

    if( strcmp(menu, "3") == 0){
        CadastroPefil();
    }

    if( strcmp(menu, "4") == 0){
        return 0;
    }

    return menu;
}
