// exercicio nao completo


#include <stdio.h>

int main() {
    double salario ,desconto;

    printf("Digite o salario:\n");
    scanf("%lf",&salario);

    if(salario <= 600){
        printf("Isento\n");
    } else {
        if(salario > 600 && salario <= 1200) {
            desconto = (0.2*salario);
             

            printf("O desconto do INSS sera de R$%.2f .\n",desconto);
        } else {
            if (salario > 1200 && salario <= 2000) {
                desconto = (0.25*salario);
                printf("O desconto do INSS sera de R$%.2f .\n",desconto);
            } else {
                if (salario > 2000) {
                    desconto = (0.3*salario);
                    printf("O desconto do INSS sera de R$%.2f.\n",desconto);
                } else {}
            }
        }
    }

    
    return 0;
}