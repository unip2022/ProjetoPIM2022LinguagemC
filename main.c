#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


#include "Menu.h"
#include "CadClientes.h"
#include "CadastroFuncionarios.h"
#include "CadastroPefil.h"
#include "verificaSenha.h"

/// *** TEBELA DE 'ALT'
/// *** https://www.tecmundo.com.br/teclado/38738-que-caracteres-voce-pode-fazer-segurando-a-tecla-alt-tabela-.htm

int main(void)
{
     setlocale(LC_ALL,"Portuguese");
    verificaSenha();

    /// *** CONFIGURA TAMANHO DA TELA
    system("MODE con cols=85 lines=30");
    system("title Sistema [ NOME DA EMPRESA ]");

    //Menu();
    //getch();
    return 0;
}
