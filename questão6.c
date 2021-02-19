#include <stdio.h>

int main()
{
    int pulo[4]={1,2,3,4};

    printf("%d\n", *(pulo + 2));
    //saída: 3

    printf("%d\n", *(pulo + 4));
    //saída: 86

    printf("%d\n", pulo + 4);
    //saída: 6356736

    printf("%d\n", pulo + 2);
    //saída: 6356728

    //a 1° e 3° expressão referencia o terceiro elemento

}
