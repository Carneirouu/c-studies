#include <stdio.h>

int main()
{
    int amountDay, amountYears, minLife = 10;

    printf("How many cigarette do you smoke per day?: \n");
    scanf("%d", &amountDay);

    printf("And how many years do you smoke?: \n");
    scanf("%d", &amountYears);

    float lifeSteal = ((amountDay * minLife * 365.0 * amountYears)/60)/24;

    printf("You lose approximately %.2f days of your life smoking.", lifeSteal);
    return 0;
}