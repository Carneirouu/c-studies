#include <stdio.h>
#include <string.h>

int main()
{
    int i, teamCount, attackerIndex, defenderIndex;

    printf("How much teams will going to play?: \n");
    scanf("%d", &teamCount);

    char teams[teamCount][31];

    for (i = 0; i < teamCount; i++)
    {
        printf("Type the %d. team name?: ", i);
        scanf("%30s", teams[i]);
    }
    printf("\n");
    for (attackerIndex = 0; attackerIndex < teamCount; attackerIndex++)
    {
        for (defenderIndex = 0; defenderIndex < teamCount; defenderIndex++)
        {
            if (strcasecmp(teams[attackerIndex], teams[defenderIndex]) != 0) 
            {
                printf("%s x %s\n", teams[attackerIndex], teams[defenderIndex]);
            }
        }
    }
}