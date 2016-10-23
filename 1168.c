#include <stdio.h>

unsigned int calculate(char *n)
{
    unsigned int total = 0;
    int i = 0;
    while(1)
    {
        switch(n[i])
        {
            case '0':
                total += 6;
                break;
            case '1':
                total += 2;
                break;
            case '2':
                total += 5;
                break;
            case '3':
                total += 5;
                break;
            case '4':
                total += 4;
                break;
            case '5':
                total += 5;
                break;
            case '6':
                total += 6;
                break;
            case '7':
                total += 3;
                break;
            case '8':
                total += 7;
                break;
            case '9':
                total += 6;
                break;
        }

        if (n[i] == '\0')
            break;
        i++;
    }
    return total;
}

int main()
{
    int n, i;
    char num[100];
    
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", num);
        printf("%u leds\n", calculate(num));
    }

    return 0;
}