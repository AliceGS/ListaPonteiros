#include <stdio.h>

int main()
{
    char a[4]={'a','b','c','d'};
    printf("Posicoes do vetor tipo CHAR\n");
    printf("posicao 0 %d\n", &a[0]);
    printf("posicao 1 %d\n", &a[1]);
    printf("posicao 2 %d\n", &a[2]);
    printf("posicao 3 %d\n", &a[3]);
    printf("\n");
    /*
    Posicoes do vetor tipo CHAR
    posicao 0 6356732
    posicao 1 6356733
    posicao 2 6356734
    posicao 3 6356735

    Na saída comprovamos que aumenta de 1 em 1 byte
    */

    int b[4]={1,2,3,4};
    printf("Posicoes do vetor tipo INT\n");
    printf("posicao 0 %d\n", &b[0]);
    printf("posicao 1 %d\n", &b[1]);
    printf("posicao 2 %d\n", &b[2]);
    printf("posicao 3 %d\n", &b[3]);
    printf("\n");
    /*
    Posicoes do vetor tipo INT
    posicao 0 6356716
    posicao 1 6356720
    posicao 2 6356724
    posicao 3 6356728

    Na saída vemos que aumenta de 4 em 4 bytes
    a diferença pode ser justificada devido a diferença de arquitetura das máquinas
    */

    float c[4]={1.1,2.2,3.3,4.4};
    printf("Posicoes do vetor tipo FLOAT\n");
    printf("posicao 0 %d\n", &c[0]);
    printf("posicao 1 %d\n", &c[1]);
    printf("posicao 2 %d\n", &c[2]);
    printf("posicao 3 %d\n", &c[3]);
    printf("\n");
    /*
    Posicoes do vetor tipo FLOAT
    posicao 0 6356700
    posicao 1 6356704
    posicao 2 6356708
    posicao 3 6356712

    Na saída comprovamos que aumenta de 4 em 4 bytes
    */

    double d[4]={1.1,2.2,3.3,4.4};
    printf("Posicoes do vetor tipo DOUBLE\n");
    printf("posicao 0 %d\n", &d[0]);
    printf("posicao 1 %d\n", &d[1]);
    printf("posicao 2 %d\n", &d[2]);
    printf("posicao 3 %d\n", &d[3]);
    /*
    Posicoes do vetor tipo DOUBLE
    posicao 0 6356664
    posicao 1 6356672
    posicao 2 6356680
    posicao 3 6356688

    Na saída comprovamos que aumenta de 8 em 8 bytes
    */
}
