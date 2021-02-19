#include <stdio.h>

void multiplica(int mat1[][10], int mat2[][10], int mat3[][10], int lmat1, int cmat1, int cmat2)
{
    int i, j, k;

	for(i=0; i<lmat1; i++){
		for(j=0; j<cmat2; j++){
			mat3[i][j] = 0;
		}
	}

	for(i=0; i<lmat1; i++){
		for(j=0; j<cmat2; j++){
			for(k=0; k<cmat1; k++){
				mat3[i][j]+= mat1[i][k] * mat2[k][j];
			}
		}
	}
}
int main()
{
	int mat1[10][10], mat2[10][10], mat3[10][10], lmat1, cmat1, lmat2, cmat2;
	int i, j, k;

	printf("Informe a quantidade de linhas e colunas da primeira matriz, respectivamente: \n");
	scanf("%d", &lmat1);
	scanf("%d", &cmat1);

	printf("Preencha a primeira matriz: \n");
	for(i=0; i<lmat1; i++){
		for(j=0; j<cmat1; j++){
			scanf("%d", &mat1[i][j]);
		}
	}


	printf("Informe a quantidade de linhas e colunas da segunda matriz, respectivamente: \n");
	scanf("%d", &lmat2);
	scanf("%d", &cmat2);

	printf("Preencha a segunda matriz: \n");
	for(i=0; i<lmat2; i++){
		for(j=0; j<cmat2; j++){
			scanf("%d", &mat2[i][j]);
		}
	}

    multiplica(mat1, mat2, mat3, lmat1, cmat1, cmat2);

	printf("A matriz resultante da multiplicacao entre A e B eh: \n");
	for(i=0; i<lmat1; i++){
		for(j=0; j<cmat2; j++){
			printf("%d  ", mat3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
