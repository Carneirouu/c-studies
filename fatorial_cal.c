#include <stdio.h>

int main()
{
    int n, i, r;

    printf("Qual numero deseja fatorar?: ");
    scanf("%d", &n);
    i = n;
    r = 1;
    do
    {
        r = r * i;
        i--;
    } while (i > 0);
    printf("O resultado fatorial de %d e: %d", n, r);

    return 0;
}