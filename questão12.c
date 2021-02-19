#include <stdio.h>

//ponteiro para uma função eh um ponteiro que aponta para uma funcao e com isso pode ser utilizado para acessá-la

int soma (int x, int y){
    return x+y;
}

int main()
{
    int a, b, c;
    int (*ponteiro_funcao)(int,int);

    printf("Informe dois numeros inteiros para realizar a operacao de soma: ");
    scanf("%d %d", &a, &b);

    ponteiro_funcao=soma;
    c=ponteiro_funcao(a, b);

    printf("O resultado da soma eh: %d", c);

    return 0;
}


