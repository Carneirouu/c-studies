// O programa realiza a equação da circunferencia de uma planeta a partir da entrada da distancia (dist_d) entre dois pontos da superficie e o angulo (ang_a) da sombra projetada.
// A saida Ce é o produto da dist_d multiplicado por 360 e dividido pelo ang_a. Ckm é Ce multiplicado pelo 176.4 (estadios em m) divido por 1000 (transformando em Km).

#include <stdio.h>

void calculo(float dist_d, float ang_a)
{
    float Ce = ((dist_d * 360) / ang_a);      // Equação: Produto da dist_d multiplicado por 360 e dividido pelo ang_a resultando na circuferencia em estadios.
    float Ckm = ((Ce * 176.4) / 1000); // Transformando a circunferecia da unidade estadios para quilometros.

    printf("\nCe = %.2f\n\nCkm = %.2f", Ce, Ckm);
}
int main()
{
    float ang_a, dist_d;

    printf("\nDistancia entre dois pontos [Estadios]\n");
    scanf("%f", &dist_d); // Entrada: Distancia entre dois pontos na superficie.

    printf("\nAngulo da sombra projetada\n");
    scanf("%f", &ang_a); // Entrada: Angulo da sombra projeta (hipotenusa).

    calculo(dist_d, ang_a);

    return 0;
}