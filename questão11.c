#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    //comando v�lido

    scanf("%f", &aloha);
    //comando v�lido

    aloha = value";
    //comando inv�lido, pois, nenhuma posicao do vetor foi informada para receber o valor de value

    printf("%f", aloha);
    //comando v�lido

    coisas[4][4] = aloha[3];
    //comando v�lido

    coisas[5] = aloha;
    //comando inv�lido, pois, coisas eh uma matriz e precisa dos dois indices para receber um valor

    pf = value;
    //comando inv�lido, pf n�o pode receber o valor de value

    pf = aloha;
    //comando v�lido
}
