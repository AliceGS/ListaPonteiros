#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    return 0;

    //supondo que i ocupa o endere�o 4094
    //sa�da: 4094 7 5 15 9
}
