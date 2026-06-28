// Show the multiplication table of some number.
#include <stdio.h>

int main()
{
    int i = 0, n, r;

    printf("Quer ver a tabuada de qual valor?:\n");
    scanf("%d", &n);    // Choose a number to display its multiplication table.

    do  // Repete the block while i <= 10
    {
        i++;    // Add 1 to the multiplier.
        r = i * n;
        if (i != 11)
        {
            printf("%d X %d = %d\n", i, n, r);
        };
    } while (i <= 10);
    return 0;
}