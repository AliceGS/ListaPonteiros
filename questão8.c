int main()
{
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%d ",*(vet+i));
    }
    /*
    est� sendo exibido os valores que est�o em cada posi��o do vetor
    sa�da: 4 9 13
    */

    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%X ",vet+i);
    }
    /*
    est� sendo exibida a posi��o que cada valor do vetor est� ocupando
    sa�da: 60FEF0 60FEF4 60FEF8
    */
}
