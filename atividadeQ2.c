#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float comprimento;
    float largura;
    float preco;
    float total;

    printf("informe o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf ("informe o valor da largura: ");
    scanf("%f", &largura);
    printf("informe o preco do metro quadrado de carpete: ");
    scanf("%f", &preco);

    total= comprimento*largura*preco;

    printf("%f", total);

}

