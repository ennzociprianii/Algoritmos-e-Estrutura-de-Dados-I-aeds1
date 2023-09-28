#include <stdio.h>

int eh_primo(int num) {

  int i, resultado = 0;
  
  for (i = 1; i <= num /2; i++) {
      if (num % i == 0) {
      resultado++;
      }
  }
  
  if (resultado == 1){
  }
  if(resultado != 1){
      resultado = 0;
  }
  return resultado;
}

int mmc(int num1, int num2) {
    int mmc, aux, i;
    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

int mdc(int num1, int num2){
  int aux,i;
    if(num1>num2){
        aux=num1;
        num1=num2;
        num2=aux;
    }
    for(i=num1; i>1 && !(num1%i==0 && num2%i==0); i--);
return i;
}

int main(){

  int num1, num2;


  printf("Digite um numero: \n");
  scanf("%d", &num1);
  printf("Digite um numero: \n");
  scanf("%d", &num2);

  
  if (eh_primo(num1) == 0 && eh_primo(num2) == 0 ) {
    printf("MDC: %d\nMMC: %d\n", mdc(num1, num2), mmc(num1, num2));
  } else {
    printf("Os numeros sao primos!\n");
  }
  

  return 0;
}