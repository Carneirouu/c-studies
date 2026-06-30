#include <stdio.h>

void fizzbuzzSequence(int a)
{
    for (a = 1; a <= 100; a++)
    {
        if (a % 5 == 0 && a % 3 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (a % 5 == 0)
        {
            printf("Buzz\n");
        }
        else if (a % 3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("%d\n", a);
        }
    }
}
int main()
{
    int i;

    printf("Here is the FizzBuzz sequence.\n\n");
    fizzbuzzSequence(i);

    return 0;
}