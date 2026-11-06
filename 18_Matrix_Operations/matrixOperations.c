#include <stdio.h>

void imprimirMatriz(unsigned int rows, unsigned int cols, unsigned int matriz[rows][cols])
{
    unsigned int indice1, indice0;

    for (indice1 = 0; indice1 < rows; indice1++)
    {
        printf("\n");
        for (indice0 = 0; indice0 < cols; indice0++)
        {
            printf("%u ", matriz[indice1][indice0]);
        }
    }
    printf("\n");
}

void somarMatriz(unsigned int rows, unsigned int cols, unsigned int matriz[rows][cols], unsigned int matriz2[rows][cols])
{
    unsigned int indice0, indice1;

    for (indice1 = 0; indice1 < cols; indice1++)
    {
        printf("\n");
        for (indice0 = 0; indice0 < rows; indice0++)
        {
            unsigned int soma = matriz[indice1][indice0] + matriz2[indice1][indice0];
            printf("%u ", soma);
        }
    }
}

void subMatriz(unsigned int rows, unsigned int cols, unsigned int matriz[rows][cols], unsigned int matriz2[rows][cols])
{
    unsigned int indice0, indice1;

    for (indice1 = 0; indice1 < rows; indice1++)
    {
        printf("\n");
        for (indice0 = 0; indice0 < cols; indice0++)
        {
            int sub = matriz[indice1][indice0] - matriz2[indice1][indice0];
            printf("%d ", sub);
        }
    }
}

int main()
{
    unsigned int i, j, indice0, indice1, k, indice0_2, indice1_2;
    int mul = 0;

    printf("Numero de linhas: ");
    scanf("%u", &i);
    printf("Numero de colunas: ");
    scanf("%u", &j);

    unsigned int matriz[i][j], matriz2[i][j];

    for (indice1 = 0; indice1 < i; indice1++)
    {
        for (indice0 = 0; indice0 < j; indice0++)
        {
            printf("Valor da linha %u coluna %u da matriz1: ", indice1 + 1, indice0 + 1);
            scanf("%u", &matriz[indice1][indice0]);
        }
    }

    for (indice1 = 0; indice1 < i; indice1++)
    {
        for (indice0 = 0; indice0 < j; indice0++)
        {
            printf("Valor da linha %u coluna %u da matriz2: ", indice1 + 1, indice0 + 1);
            scanf("%u", &matriz2[indice1][indice0]);
        }
    }

    printf("\nQual operacao:\n[1]Soma das matrizes | [2]Subtracao das matrizes\n[3]Multiplicacao das matrizes | [4]Transposta da matrizes\n\nDigite aqui:");
    scanf("%u", &k);

    switch (k)
    {
    case 1:

        imprimirMatriz(i, j, matriz);

        imprimirMatriz(i, j, matriz2);

        somarMatriz(i, j, matriz, matriz2);
        break;
    case 2:
        imprimirMatriz(i, j, matriz);

        imprimirMatriz(i, j, matriz2);

        subMatriz(i, j, matriz, matriz2);
        break;
    case 3:
        for (indice1 = 0; indice1 < i; indice1++)
        {
            for (indice0 = 0; indice0 < j; indice0++)
            {
                for (indice1_2 = 0; indice1_2 < i; indice1_2++)
                {
                    for (indice0_2 = 0; indice0_2 < i; indice0_2++)
                    {
                        mul = matriz[indice1][indice0] * matriz2[indice1_2][indice0_2];
                        mul += mul;
                        printf("%d ", mul);
                    }
                }
            }
            printf("\n");
        }
        for (indice1_2 = 0; indice1_2 < i; indice1_2++)
        {
            for (indice0_2 = 0; indice0_2 < i; indice0_2++)
            {
            }
        }
        mul = matriz[indice1][indice0] * matriz2[indice1_2][indice0_2];
        mul += mul;
        printf("%d ", mul);
        break;
    case 4:
        imprimirMatriz(i, j, matriz);

        imprimirMatriz(i, j, matriz2);

        for (indice1 = 0; indice1 < j; indice1++)
        {
            printf("\n");
            for (indice0 = 0; indice0 < i; indice0++)
            {
                printf("%u ", matriz[indice0][indice1]);
            }
        }
        printf("\n");

        for (indice1 = 0; indice1 < j; indice1++)
        {
            printf("\n");
            for (indice0 = 0; indice0 < i; indice0++)
            {
                printf("%u ", matriz2[indice0][indice1]);
            }
        }
        break;
    }
}