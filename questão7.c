#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1;
    //express�o v�lida, uma posi��o est� sendo incrementada

    p = mat++;
    //express�o inv�lida, um valor est� tentando ser incrementado no vetor

    p = ++mat;
    //express�o inv�lida, um valor est� tentando ser decrementado no vetor

    x = (*mat)++;
    //express�o v�lida, porque mat est� como um ponteiro.
}
