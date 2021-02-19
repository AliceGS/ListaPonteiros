#include <stdio.h>

void soma(int* vet1, int* vet2, int* vet3, int tam){

    int i, *p1, *p2, *p3;

    printf("Informe os valores do primeiro vetor: \n");
    for(i=0; i<tam; i++){
        scanf("%d",&vet1[i]);
    }
    printf("Informe os valores do segundo vetor: \n");
    for(i=0; i<tam; i++){
        scanf("%d", &vet2[i]);
    }

    p1 = vet1;
    p2 = vet2;
    p3 = vet3;

    for(i=0; i<tam; i++){
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }

    printf("O vetor soma eh: \n");
    for(i=0; i<tam; i++){
        printf("%d ", vet3[i]);
    }
}

int main() {

    int tam;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tam);

    int vet1[tam], vet2[tam], vet3[tam];

    soma(vet1, vet2, vet3, tam);

    return 0;
}
