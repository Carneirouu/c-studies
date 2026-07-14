#include <stdio.h>

int main()
{
    int vet[4], i, j, aux;

    for (i = 1; i <= 4; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
    for (i = 1; i <= 3; i++){
        for (j = i + 1; j <= 4; j++){
            if (vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for (i = 1; i <= 4; i++){
        printf("[ %d ]", vet[i]);
    }
    return 0;
}