#include <stdio.h>

void evenOdd(int v)
{
    if (v%2 == 0)
    {
        printf("O numero %d e par.", v);
    } else {
        printf("O numero %d e impar.", v);
        return;
    }
}
int main ()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    evenOdd(num);
    return 0;
}