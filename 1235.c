#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, aux, size, half;
    char str[101];

    scanf("%d%*c", &n);

    while(n-- > 0)
    {
        fgets(str, 101, stdin);
        size = strlen(str) - 1;
        half = size/2;

        for (i = half - 1; i >= 0; i--)
            printf("%c", str[i]);

        for (i = size-1; i >=half; i--)
            printf("%c", str[i]);

        printf("\n");
    }
    return 0;
}