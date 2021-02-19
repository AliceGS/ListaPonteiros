#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void* n1, const void* n2){
    if(*(int*)n1 == *(int*)n2)
        return 0;
    else if(*(int*)n1 < *(int*)n2)
        return -1;
    else
        return 1;
}

void ordena(int qntd){

    float *n, aux;
    int i;

    n=(float*)malloc(qntd*sizeof(float));

    printf("Informe os numeros para ordenacao: \n");
    for(i=0; i<qntd; i++){
        scanf("%f", &n[i]);
    }

    qsort(n, qntd, sizeof(int), compara);

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

