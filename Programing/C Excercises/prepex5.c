#include <stdio.h>
int main()
{
    int n3, n2, n1, n0, baseDecimal, baseOctal;
    printf("Digite o número em binário:\n");
    scanf("%d %d %d %d", &n3, &n2, &n1, &n0);
    baseDecimal = n3*2*2*2 + n2*2*2 + n1*2 + n0*1;
    printf("O valor na base decimal: %d\n", baseDecimal);
    baseOctal = n3 * 10 + (n2 * 2 * 2 + n1 * 2 + n0 * 1);
    printf("O valor na base octal: %d \n", baseOctal);
     if (baseDecimal == 10)
         printf("O valor na base hexadecimal: A\n");
    else if (baseDecimal == 11)
          printf("O valor na base hexadecimal: B\n");
    else if (baseDecimal == 12)
        printf("O valor na base hexadecimal: C\n");
    else if (baseDecimal == 13)
        printf("O valor na base hexadecimal: D\n");
    else if (baseDecimal == 14)
        printf("O valor na base hexadecimal: E\n");
    else if (baseDecimal == 15)
        printf("O valor na base hexadecimal: D\n");
    else 
    printf("O valor na base hexadecimal: %d\n", baseDecimal);
}