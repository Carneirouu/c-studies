#include <stdio.h>

int main()
{
    int n, i = 0, q = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        i++;
        if (n < 0)
        {
            q++;
        }
    } while (i != 5);
    printf("Quantidade de numeros negativos: %d", q);
    return 0;
}