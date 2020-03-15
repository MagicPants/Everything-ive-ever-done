

int main()
{
    int numInput1, numInput2, resto;
    printf("Escreva os dois números desejados: \n");
    scanf("%d %d", &numInput1, &numInput2);
    resto = numInput1%numInput2;
    if (resto == 0)
        printf("Os números selecionados são múltiplos. \n");
    else
        printf("Os números selecionados não são múltiplos. \n");

}