#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    size_t length = strlen(str);
    char *end = str + length - 1;
    while (str < end)
    {
        *str ^= *end;
        *end ^= *str;
        *str ^= *end;

        str++;
        end--;
    }
}

int main()
{
    int test_cases, i, j;
    size_t len;
    char str[1000];

    scanf("%d", &test_cases);
    getchar();
    
    for (i = 0; i < test_cases; i++)
    {
        scanf("%[^\n]", str);
        getchar();
        len = strlen(str);

        for (j = 0; j < len; j++)
        {
            if (str[j] >= 65 && str[j] <= 90 || str[j] >= 97 && str[j] <= 122) //if alphabetic, shift >> 3
                str[j] = str[j] + 3;
        }

       reverse(str); //reverse string
       
        for (j = len/2; j < len; j++) //len/2 -> len shifted << 1
            str[j] = str[j] - 1;

        printf("%s\n", str);
    }
    return 0;
}