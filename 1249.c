#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];
    int i;

    while (fgets(text, 50, stdin) != NULL)
    {
        for (i = 0; i < strlen(text); i++)
        {
            if (text[i] >= 'a' && text[i] < 'n' || text[i] >= 'A' && text[i] < 'N')
                printf("%c", text[i] + 13);
            else if (text[i] >= 'n' && text[i] <= 'z' || text[i] >= 'N' && text[i] <= 'Z')
                printf("%c", text[i] - 13);
            else
                printf("%c", text[i]);
        }
    }
    return 0;
}