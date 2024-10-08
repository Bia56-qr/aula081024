#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho;
    int velocidade;
    int tempo;

    printf("informe o tamanho do arquivo em bits: ");
    scanf("%d", &tamanho);
    printf("informe a velocidade da conexao em bits por segundo: ");
    scanf("%d", &velocidade);
    printf("informe o tempo para download: ");
    scanf("%d", &tempo);

    tempo= tamanho/velocidade;

}