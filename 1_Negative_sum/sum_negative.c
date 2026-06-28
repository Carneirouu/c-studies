// This program counts how many negative numbers are in an input sequence.

#include <stdio.h> // Include the "stdio.h" library.

int main()
{
    int n, i = 0, q = 0;

    do // Repete the block while i != 5.
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        i++;       // Add 1 for the i variable.
        if (n < 0) // If n < 0 add 1 for the q variale, that count the negative numbers.
        {
            q++;
        }
    } while (i != 5);
    printf("Quantidade de numeros negativos: %d", q); // Output the amount of negative number.
    return 0;
}