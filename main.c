#include <stdio.h>
#include <stdlib.h>

int CadastroClientes(){
    system("cls");
    printf("=== CADASTRO DE CLIENTES ===");
}

int CadastroFuncionarios(){
    system("cls");
    printf("=== CADASTRO DE FUNCIONARIOS ===");

}

int CadastroPefil(){
    system("cls");
    printf("=== CADASTRO DE PERFIL ===");

}

int Menu(){
    char menu[61];
    system("cls");
    printf("ESCOLHA UMA OPCAO: \n 1 - CADASTRO CLIENTES \n 2 - CADASTRO DE FUNCIONARIOS \n 3 - CADASTRO DE PERFIL \n 4 - SAIR ");

    printf("\nDigite sua escolha: ");
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
    /*
    switch(menu){
    case 1 :
        CadastroClientes();
    break;
    }
    */

    return menu;
}



int main(void)
{
    char email[61];
    char *emailVerifica;
    char senha[61];
    int i;

    //Menu();

    /// *** ENTRADA DE EMAIL
    EMAIL: ///  INICIO DO GOTO
    printf("\nDigite seu e-mail: ");
    scanf("%s",email);

    emailVerifica = strchr(email,'@'); /// *** VERIFICA SE EXISTE '@' NO EMAIL PARA QUE ELE SEJA VALIDO

    if(emailVerifica == '\0'){
        printf("\nDigite um e-mail valido");
        goto EMAIL;
    }else{
        goto SENHA;    }

    /// *** ENTRADA DE SENHA
    SENHA: ///  INICIO DO GOTO
    printf("\nDigite sua senha: ");
    scanf("%s",senha);

    /// *** VERIFICA SE SENHA ESTA CORRETA
    system("cls"); /// LIMPA A TELA
    printf("\nVerificando senha, aguarde... ");
    Sleep(2000); /// DELAY DE 2 SEGUNDOS

    system("cls");
    if( strcmp(email, "email@email.com") == 0 && strcmp(senha, "1234") == 0){
        printf("\n Acesso Permitido ");
        Menu(); /// *** CHAMA A FUNÇÃO QUE EXIBIRÁ O MENU
    }else{
        printf("\n Acesso Negado ");
        goto EMAIL;
    }

    //getch();
    return 0;
}
