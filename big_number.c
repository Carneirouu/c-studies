// Ao digitar valores distintos ou iguais o programa deve devolver o maior dentre eles.

#include <stdio.h>
int main()
{
    int i = 0, maior, valor;    //Três váriaveis declaradas i, maior e valor, todas inteiras.

    printf("Digite 5 numeros\n");   //Solicita ao usuario os valores.

    while (i < 5)  //Estrutura de repetição que fara um loop no programa enquanto i for < 5.
    {
        i++;  //A cada loop soma-se 1 a váriavel i.
        scanf("%d", &valor);    //Lê o digito que o usuario inseriu.
        if (valor > maior)     //Estrutura de checagem, se o próximo valor a ser digitado for maior que o maior valor digitado ele assume a posição de maior valor.
        {
            maior = valor;
        }
    }

    printf("O maior numero da lista e: %d\n", maior);   //Devolve o resultado, no caso, o maio valor digitado.
    return 0;
}