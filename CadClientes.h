int CadastroClientes(){

    FILE *arq;
    char Linha[100];
    char *result;
    int i;

    system("cls");
    printf("=== CADASTRO DE CLIENTES TESTE ===\n");

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
        // L� uma linha (inclusive com o '\n')
          result = fgets(Linha, 100, arq);  // o 'fgets' l� at� 99 caracteres ou at� o '\n'
          if (result)  // Se foi poss�vel ler
          //printf("Linha %d : %s",i,Linha);
          printf("%s",Linha);
          i++;
        }
        fclose(arq);

    printf("\n\n\n");
    system("pause");
    Menu();
}
