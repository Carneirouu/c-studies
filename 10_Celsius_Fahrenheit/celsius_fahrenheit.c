// Convert °C to °F.

#include <stdio.h>

float converter(float c)
{
    float f = (c * 9 / 5) + 32;
    return f;
}
int main()
{
    float celsius, fahrenheit;

    printf("Which degree celsius will be converted?: ");
    scanf("%f", &celsius);
    fahrenheit = converter(celsius);
    printf("\n%.2f degree celsius is the same as %.2f degree fahrenheit.", celsius, fahrenheit);
    return 0;
}