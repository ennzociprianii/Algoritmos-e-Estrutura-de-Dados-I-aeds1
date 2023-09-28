#include <stdio.h>


int main(){

  int login, senha;
  login = 1;
  senha = 2002;
  
  

  while (login != senha) {
    scanf("%d", &login);
    if (login == senha) {
      printf("Acesso Permitido\n");
    } else {
      printf("Senha Invalida\n");
    }

  }
 
  return 0;
}