// Matheus André Bégio Carneiro
// RA:2760482611015
// Exercício P1

#include <stdio.h>

int main()
{
    unsigned int numero, i, sorte = 0;

    printf("Digite um valor: ");
    scanf("%u", &numero);

    if (numero <= 9)
    {
        printf("Seu numero da sorte e: %u", numero);
    }
    else
    {
        do
        {
            do
            {
                i = numero % 10;
                numero = numero / 10;
                sorte += i;
            } while (numero != 0);
            numero = sorte;
            sorte = 0;
            i = numero % 10;
            numero = numero / 10;
            sorte += i;
        } while (numero != 0);
        printf("------------------------\nSeu numero da sorte e: %u\n------------------------\n", sorte);
    }
    return 0;
}