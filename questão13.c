#include <stdio.h>

void ordena(int qntd){
    float *n, aux;
    int i, j;

    n=(float*)malloc(qntd*sizeof(float));

    printf("Informe os numeros para ordenacao: \n");
    for(i=0; i<qntd; i++){
        scanf("%f", &n[i]);
    }

    for(i=0; i<qntd-1; i++){
        for(j=i; j<qntd; j++){
            if(n[i]>n[j]){
                aux = n[i];
                n[i]=n[j];
                n[j]=aux;
            }
        }
    }
    printf("\n");
    printf("A ordem crescente dos valores eh: \n");
    for(i=0; i<qntd; i++){
        printf("%f \n", n[i]);
    }

    free(n);
}

int main()
{
    int qntd;

    printf("Informe a quantidade de elementos que deseja ordenar: \n");
    scanf("%d", &qntd);

    ordena(qntd);

    return 0;
}
