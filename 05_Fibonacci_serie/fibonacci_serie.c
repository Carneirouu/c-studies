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
void fibonacci(int num)
{
    int i, f = 0, c1 = 1, c2;
    for (i = 1; i <= num; i++) // Repete the block based on the lenght of the sequence.
    {
        printf("%d   ", f);
        aureaProportion(f, c1); // Execute the aurea block.

        c2 = c1 + f;
        c1 = f;
        f = c2;
    }
}
int main()
{
    int num;

    printf("How long Fibonacci serie?: "); // Choose how long will be the serie.
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}