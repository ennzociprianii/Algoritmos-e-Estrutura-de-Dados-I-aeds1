#include <stdio.h>

int main() {

   int numero_lados;
   double medida_lados, area;

   printf("Digite o numero de lados do poligono:\n");
   scanf("%d", &numero_lados);
   if (numero_lados == 3) {
        printf("Digite a medida em cm:\n");
        scanf("%lf", &medida_lados);
        area = (medida_lados*medida_lados)/2;
        printf("TRIANGULO = %.1lf", area);
   } else {
        if (numero_lados == 4) {
            printf("Digite a medida em cm:\n");
            scanf("%lf", &medida_lados);
            area = (medida_lados*medida_lados);
            printf("QUADRADO = %.1lf", area);
        } else {
            printf("Numero de lados invalido!\n");
        }

   }


   return 0;
}