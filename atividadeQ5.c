#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

int main(){

    float C;
    float J;
    float M;
    
    printf("informe o valor do capital: ");
    scanf("%f", &C);
    printf ("informe a taxa de juros mensal fixa: ");
    scanf("%f", &J);
    printf("informe o o periodo de aplicação em meses: ");
    scanf("%f", &M);

    float Y= C;
    float X= (1+J/100);
    pow(X,M); 
    float F=Y*X;
    printf("%f", F);

}
