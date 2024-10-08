#include <stdio.h>
#include <stdlib.h>

int main(){

    float distancia;
    float combustivel;
    float consumo;

    printf("informe a distancia percorrida: ");
    scanf("%f", &distancia);
    printf ("informe o combustivel gasto: ");
    scanf("%f", &combustivel);

    consumo = distancia/combustivel;

    printf("%f", consumo);

}