#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Insira 3 numeros:");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3 && n2 >= n3) // n1 n2 n3
    {
        printf("%d %d %d\n", n1, n2, n3);
    }
    else if (n1 >= n2 && n1 >= n3 && n3 >= n2) // n1 n3 n2
    {
        printf("%d %d %d\n", n1, n3, n2);
    }
    else if (n2 >= n1 && n2 >= n3 && n1 >= n3) //n2 n1 n3
    {
        printf("%d %d %d\n", n2, n1, n3);
    }
    else if (n2 >= n1 && n2 >= n3 && n1 >= n3) //n2 n3 n1
    {
        printf("%d %d %d\n", n2, n3, n1);
    }

    else if (n3 >= n1 && n3 >= n2 && n1 >= n2) //n3 n1 n2
    {
        printf("%d %d %d\n", n3, n1, n2);
    }
    else if (n3 >= n1 && n3 >= n2 && n2 >= n1) //n3 n2 n1
    {
        printf("%d %d %d\n", n3, n2, n3);
    }
}