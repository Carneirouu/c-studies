#include <stdio.h>
#include <string.h>

int main()
{
    char word[31], vowels[] = "aeiou";
    int vowelCounter = 0, vowelIndex, charIndex;

    printf("Type a word: ");
    scanf("%30s", word);

    int length = strlen(word);

    for (charIndex = 0; charIndex < length; charIndex++)
    {
        for (vowelIndex = 0; vowelIndex < 5; vowelIndex++)
        {
            if (word[charIndex] == vowels[vowelIndex])
            {
                vowelCounter++;
            }
        }
    }

    printf("\nThe word %s has %d vowels. ", word, vowelCounter);
    return 0;
}