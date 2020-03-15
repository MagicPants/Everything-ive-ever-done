#include <stdio.h>
 int main()
 {
    int i, j, *p_1, *p_2, **p_p_1, **p_p_2;
    i = 4;
    j = 5;
    p_1 = &i;
    p_2 = &j;
    p_p_1 = &p_2;
    p_p_2 = &p_1;
    printf("%p \n%p \n" ,p_1, p_p_2);
 }
