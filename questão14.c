#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void* a, const void* b){

    return (*(int*)a - *(int*)b);
}

void ordena(float qntd){

    float *n, aux;
    int i;

    n=(float*)malloc(qntd*sizeof(float));

    printf("Informe os numeros para ordenacao: \n");
    for(i=0; i<qntd; i++){
        scanf("%f", &n[i]);
    }

    qsort(n, qntd, sizeof(float), compara);

    printf("\n");
    printf("A ordem crescente dos valores eh: \n");
    for(i=0; i<qntd; i++){
        printf("%f \n", n[i]);
    }

    free(n);
}

int main() {

    int qntd;
    clock_t t;

    printf("Informe a quantidade de elementos que deseja ordenar: \n");
    scanf("%d", &qntd);

    t = clock();
    ordena(qntd);
    t = clock() - t;
    printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}

