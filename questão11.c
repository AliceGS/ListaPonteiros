#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    //comando válido

    scanf("%f", &aloha);
    //comando válido

    aloha = value";
    //comando inválido, pois, nenhuma posicao do vetor foi informada para receber o valor de value

    printf("%f", aloha);
    //comando válido

    coisas[4][4] = aloha[3];
    //comando válido

    coisas[5] = aloha;
    //comando inválido, pois, coisas eh uma matriz e precisa dos dois indices para receber um valor

    pf = value;
    //comando inválido, pf não pode receber o valor de value

    pf = aloha;
    //comando válido
}
