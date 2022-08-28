#include <stdio.h>
#include <stdlib.h>


int Menu(){
    int menu;
    system("cls");
    printf("ESCOLHA UMA OPCAO: \n 1 - CADASTRO CLIENTES \n 2 - CADASTRO DE FUNCIONARIOS \n 3 - CADASTRO DE PERFIL \n 4 - SAIR ");

    printf("\n:Digite sua escolha: ");
    scanf("%i",menu);

}



int main(void)
{
    char email[61];
    char *emailVerifica;
    char senha[61];
    int i;


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

    getch();
    return 0;
}
