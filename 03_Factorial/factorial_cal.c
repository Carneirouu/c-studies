// The program do factorial operation of some number chosen.

#include <stdio.h>
int fatorial(int v)
{
    int r, i;
    r = 1;
    for (i = v; i > 0; i--) // Repete the block while i > 0.
    {
        r = r * i;
    }
    return r; // Return the last r value.
}
int main()
{
    int n, f;

    printf("Qual numero deseja fatorar?: ");
    scanf("%d", &n);
    f = fatorial(n); // Function that calculate the factorial.
    printf("O resultado fatorial de %d e: %d", n, f);
    return 0;
}