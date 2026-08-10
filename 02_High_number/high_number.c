#include <stdio.h>
#include <limits.h>

int main()
{

    double indexLoop = 0, maior = INT_MIN, value, logicalTest = 0, spinIndex = 10;

    for (indexLoop = 0; indexLoop < spinIndex; indexLoop++)
    {
        printf("Digite um numero: ");
        logicalTest = 0;
        while (logicalTest == 0)
        {

            if (scanf("%lf", &value) == 1)
            {
                if (value > maior)
                {
                    maior = value;
                }
                logicalTest = 1;
            }
            else
            {
                printf("ERRO! ");
                scanf("%lf", &value);
                logicalTest = 1;
                while (getchar() != '\n')
                {
                }
                spinIndex++;
            }
        }
    }
    printf("\nO maior valor da lista e: %.2f", maior);
    return 0;
}