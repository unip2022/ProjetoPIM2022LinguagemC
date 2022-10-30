void Menu(){

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
        ConsultaDeClientes();
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

}
