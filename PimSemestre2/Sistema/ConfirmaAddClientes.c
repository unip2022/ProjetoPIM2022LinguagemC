char ConfirmaAddClientes(){

char op;

   do {
      printf("\n DESEJA INSERIR UM NOVO CLIENTE? [S ou N]? " );
      op = getch();
   } while (op != 's' && op != 'n');

   return op;

}
