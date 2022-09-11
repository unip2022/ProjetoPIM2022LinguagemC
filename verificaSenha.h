void verificaSenha(){

    FILE *arq;
    char Linha[100];
    char *result;
    int ii;

    char email[100];
    char *emailVerifica;
    char senha[61];
    char *cat;
    int i;

    /// *** ENTRADA DE EMAIL
    EMAIL: ///  INICIO DO GOTO
    printf("\nDigite TOKEN: ");
    scanf("%s",email);

    /*
    emailVerifica = strchr(email,'@'); /// *** VERIFICA SE EXISTE '@' NO EMAIL PARA QUE ELE SEJA VALIDO

    if(emailVerifica == '\0'){
        printf("\nDigite um e-mail valido");
        goto EMAIL;
    }else{
        goto SENHA;
    }

    /// *** ENTRADA DE SENHA
    SENHA: ///  INICIO DO GOTO
    printf("\nDigite sua senha: ");
    scanf("%s",senha);

    */

    /// *** VERIFICA SE SENHA ESTA CORRETA
    system("cls"); /// LIMPA A TELA
    printf("\nVerificando senha, aguarde... ");
    Sleep(2000); /// DELAY DE 2 SEGUNDOS

    system("cls");

        // Abre um arquivo TEXTO para LEITURA
        arq = fopen("bd_usuarios.txt", "rt");
        if (arq == NULL)  // Se houve erro na abertura
        {
         printf("Problemas na abertura do arquivo\n");
         return;
        }

        ii = 1;
        while (!feof(arq))
        {
        // Lê uma linha (inclusive com o '\n')
          result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
          if (result)  // Se foi possível ler
          //printf("Linha %d : %s",i,Linha);
          printf("%s",Linha);

          if( strcmp (Linha,email) == 0 ){
            printf(" [=] \n");
          }else{
            printf(" [!=] \n");
          }

          ii++;

        }
        fclose(arq);

        printf("\n\n\n");
        system("pause");


    /*
    if( strcmp(email, "e@e.com") == 0 && strcmp(senha, "1234") == 0){
        printf("\n Acesso Permitido ");
        Menu(); /// *** CHAMA A FUNÇÃO QUE EXIBIRÁ O MENU
    }else{
        printf("\n Acesso Negado ");
        goto EMAIL;
    }
    */


}
