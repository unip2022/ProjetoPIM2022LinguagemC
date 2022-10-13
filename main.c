#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

#include "Menu.h"
#include "CadClientes.h"
#include "CadastroFuncionarios.h"
#include "CadastroPefil.h"
#include "verificaSenha.h"
#include "TopoMenu.h"

/// *** TEBELA DE 'ALT'
/// *** https://www.tecmundo.com.br/teclado/38738-que-caracteres-voce-pode-fazer-segurando-a-tecla-alt-tabela-.htm

int main(void)
{

    /*
    MYSQL *con = mysql_init(NULL);
    if (con == NULL) {
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }
    if (mysql_real_connect(con, "af1012.mysql.dbaas.com.br", "af1012", "Tiagoweb1012!", NULL, 0, NULL, 0) == NULL) {
        fprintf(stderr, "%s\n", mysql_error(con));
        printf("conectado");
        mysql_close(con);
        exit(1);
    }
    */

    setlocale(LC_ALL,"Portuguese");
    //verificaSenha();

    /// *** CONFIGURA TAMANHO DA TELA
    system("MODE con cols=85 lines=50");
    system("title Sistema [ SKT SISTEMS ]");

    Menu();
    //getch();

    return 0;
}
