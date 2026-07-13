// This code stores the grades of 3 students and shows if they passed the class based on a minimum grade of 6.

#include <stdio.h>

int main()
{
    char name[3][20]; // The string name stores 3 arrays of max 19 characters.
    float g1[3], g2[3], Average[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Name and last name: ");
        scanf(" %[^\n]s", name[i]); // " %[^\n]s" Scan the name variable, without count the spaces, only the enter button.
        printf("\nFirst grade: ");
        scanf("%f", &g1[i]);
        if (g1[i] < 0 || g1[i] > 10)
        {
            printf("\nWas written a unaccept valor.\nPlease, type again you first grade: ");
            scanf("%f", &g1[i]);
        }
        printf("\nSecond grade: ");
        scanf("%f", &g2[i]);
        if (g2[i] < 0 || g2[i] > 10)
        {
            printf("\nWas written a unaccept valor.\nPlease, type again you first grade: ");
            scanf("%f", &g2[i]);
        }
        Average[i] = (g1[i] + g2[i]) / 2;
    }
    printf("\e[1;1H\e[2J"); // Clear the screen inside terminal.
    for (i = 0; i < 3; i++)
    {
        printf("-------------------\n\n");
        printf("%s\n\n", name[i]);
        printf("N1: %.2f\n", g1[i]);
        printf("N2 = %.2f\n", g2[i]);
        printf("Average = %.2f", Average[i]);
        if (Average[i] >= 6)
        {
            printf("\n\nCONGRATULATIONS... PASSED!!\n\n");
        }
        else
        {
            printf("\n\nREPROVED!\n\n");
        }
    }
    return 0;
}