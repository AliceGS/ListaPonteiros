#include <stdio.h>

int main()
{
    int i=3, j=5, b, d;
    int *p, *q;
    p = &i;
    q = &j;

    printf("a=%d\n ", p == &i);
    //sa�da: a=1

    b=*p-*q;
    printf("b=%d\n", b);
    //sa�da: b=-2

    printf("c=%d\n", **&p);
    //sa�da: c=3

    d=3 - *p/(*q) + 7;
    printf("d=%d\n", d);
    //sa�da: d=10

    return 0;
}
