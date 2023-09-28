#include <stdio.h>
#define dia_atual 1
#define mes_atual 5
#define ano_atual 2023

int main(){

  int dia, mes, ano;
  int qts_anos_passou, qts_dias_passou, qts_meses_passou;
  

  printf("Digite o dia da data antiga: \n");
  scanf("%d", &dia);

  printf("Digite o mes da data antiga: \n");
  scanf("%d", &mes);

  printf("Digite o ano da data antiga: \n");
  scanf("%d", &ano);
  
  if (ano % 4 == 0) {
    qts_anos_passou = ano_atual - ano;
    


  }


  return 0;
}