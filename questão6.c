#include <stdio.h>

int main()
{
    int pulo[4]={1,2,3,4};

    printf("%d\n", *(pulo + 2));
    //sa�da: 3

    printf("%d\n", *(pulo + 4));
    //sa�da: 86

    printf("%d\n", pulo + 4);
    //sa�da: 6356736

    printf("%d\n", pulo + 2);
    //sa�da: 6356728

    //a 1� e 3� express�o referencia o terceiro elemento

}
