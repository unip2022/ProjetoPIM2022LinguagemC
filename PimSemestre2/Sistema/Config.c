#include <locale.h>

void Config(){

    setlocale(LC_ALL,"Portuguese");

    /// *** CONFIGURA TAMANHO DA TELA
    system("MODE con cols=85 lines=30");
    system("title Sistema [ SKT SISTEMS ]");

}
