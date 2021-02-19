int main()
{
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%d ",*(vet+i));
    }
    /*
    está sendo exibido os valores que estão em cada posição do vetor
    saída: 4 9 13
    */

    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%X ",vet+i);
    }
    /*
    está sendo exibida a posição que cada valor do vetor está ocupando
    saída: 60FEF0 60FEF4 60FEF8
    */
}
