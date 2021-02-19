#include <stdio.h>

int main()
{
    int i, j;
    int *p, *q;

    printf("a: %d\n", p=i);
    //saída: a: 94

    printf("b: %d\n", q = &j);
    //saída: b: 6356720

    printf("c: %d\n", p = &*&i);
    //saída: c: 6356724

    printf("d: %d\n", i = (*&)j);
    //saída: expressão de atribuição ilegal,
    //nessa situação o parentese não é identificado para ordem de precedência

    printf("e: %d\n", i = *&j);
    //saída: e: 4200816

    printf("f: %d\n", i = *&*&j);
    //saída: f: 4200816

    printf("g: %d\n", q = *p);
    //saída: g: 4200816

    printf("h: %d\n", i = (*p)++ + *q);
    //saída: h: 1080042001

}
