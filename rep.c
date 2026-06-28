#include <stdio.h>

int main()
{
    int i = 0, n, r;

    printf("Quer ver a tabuada de qual valor?:\n");
    scanf("%d", &n);

    do
    {
        i++;
        r = i * n;
        if (i != 11)
        {
            printf("%d X %d = %d\n", i, n, r);
        };
    } while (i <= 10);
    return 0;
}