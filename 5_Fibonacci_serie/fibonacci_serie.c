// Display the Fibbonacci series and the aurea proportion.
#include <stdio.h>

void aureaProportion(int a, int b)
{
    if (b != 0)
    {
        float d = (float)a / b;
        printf("%.5f\n", d);
    }
    else
    {
        printf("undefined\n");
    }
}
int main()
{
    int i, f = 0, c1 = 1, c2, num;

    printf("How long Fibonacci serie?: "); // Choose how long will be the serie.
    scanf("%d", &num);

    for (i = 1; i <= num; i++) // Repete the block based on the lenght of the sequence.
    {
        printf("%d   ", f);
        c2 = c1 + f;
        aureaProportion(c1, f); // Execute the aurea block.
        c1 = f;
        f = c2;
    }
    return 0;
}