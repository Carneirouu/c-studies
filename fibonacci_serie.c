#include <stdio.h>

int main()
{
    int i, f = 0, c1 = 1, c2, num;
    float d;

    printf("How long Fibonacci serie?: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d   ", f);
        c2 = c1 + f;
        if (f != 0)
        {
            d = (float)c2 / f;
            printf("%.5f\n", d);
        }
        else
        {
            printf("undefined\n");
        }
        c1 = f;
        f = c2;
    }
    return 0;
}