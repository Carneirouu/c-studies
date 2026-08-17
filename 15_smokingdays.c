#include <stdio.h>

int main()
{
    int amountDay, amountYears, minLife = 600, lifeSteal;

    printf("How much cigarette do you smoke per day?: \n");
    scanf("%d", &amountDay);

    printf("And how many years do you smoke?: \n");
    scanf("%d", &amountYears);

    lifeSteal = (((((amountDay * minLife) * 365) * amountYears)/60)/60)/24;

    printf("Do lost %d days of your life smoking.", lifeSteal);
    return 0;
}