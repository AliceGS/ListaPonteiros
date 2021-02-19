#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1;
    //expressão válida, uma posição está sendo incrementada

    p = mat++;
    //expressão inválida, um valor está tentando ser incrementado no vetor

    p = ++mat;
    //expressão inválida, um valor está tentando ser decrementado no vetor

    x = (*mat)++;
    //expressão válida, porque mat está como um ponteiro.
}
