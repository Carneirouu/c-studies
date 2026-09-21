#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;

    while (1)
    {
        for (h = 0; h < 25; h++)
        {
            for (m = 0; m < 60; m++)
            {
                for (s = 0; s < 60; s++)
                {
                    printf("%d:%d:%d\n", h, m, s);
                    Sleep(1000);
                }
            }
        }
        return 0;
    }
}
