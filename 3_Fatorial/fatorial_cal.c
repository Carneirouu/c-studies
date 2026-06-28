// The program do factorial operation of some number chosen.

#include <stdio.h>

int main()
{
    int n, i, r;

    printf("Qual numero deseja fatorar?: ");
    scanf("%d", &n);
    i = n;
    r = 1;
    do // Repete the block while i is greater than 0.
    {
        r = r * i; // After each multiplication operation decrease 1 of the i variable.
        i--;
    } while (i > 0);
    printf("O resultado fatorial de %d e: %d", n, r);
    return 0;
}