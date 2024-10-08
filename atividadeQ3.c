#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){

    float peso;
    float altura;
    float IMC;

    printf("informe o valor do peso: ");
    scanf("%f", &peso);
    printf ("informe o valor da altura: ");
    scanf("%f", &altura);
    printf("informe o IMC encontrado: ");
    scanf("%f", &IMC);

    IMC= peso/(pow(altura, 2));

}