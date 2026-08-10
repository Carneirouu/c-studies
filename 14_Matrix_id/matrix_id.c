#include <stdio.h>

int main()
{
    int matrix[4][4], i, j, sumDiagonal = 0, prodRow2 = 1, grtValue;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the value for position [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("  %d", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        sumDiagonal += matrix[i][i];
    }

    grtValue = matrix[0][2];
    for (i = 1; i < 4; i++)
    {
        if (matrix[i][2] > grtValue)
        {
            grtValue = matrix[i][2];
        }
    }

    for (j = 0; j < 4; j++)
    {
        prodRow2 *= matrix[1][j];
    }

    printf("The diagonal sum is: %d\n\nThe product of the second row: %d\n\nThe greatest value in the third column is: %d\n", sumDiagonal, prodRow2, grtValue);

    return 0;
}
