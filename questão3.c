#include <stdio.h>

int main()
{
    int i, j;
    int *p, *q;

    printf("a: %d\n", p=i);
    //sa�da: a: 94

    printf("b: %d\n", q = &j);
    //sa�da: b: 6356720

    printf("c: %d\n", p = &*&i);
    //sa�da: c: 6356724

    printf("d: %d\n", i = (*&)j);
    //sa�da: express�o de atribui��o ilegal,
    //nessa situa��o o parentese n�o � identificado para ordem de preced�ncia

    printf("e: %d\n", i = *&j);
    //sa�da: e: 4200816

    printf("f: %d\n", i = *&*&j);
    //sa�da: f: 4200816

    printf("g: %d\n", q = *p);
    //sa�da: g: 4200816

    printf("h: %d\n", i = (*p)++ + *q);
    //sa�da: h: 1080042001

}
