#include <stdio.h>

void convert(unsigned long long number, char *str)
{
    int i = 0, j;
    while (number != 0)
    {
        if ((number % 32) < 10){
            str[i++] = 48 + (number%32);
        }
        else
            str[i++] = 55 + (number%32);

        number /= 32;  
    }

    for (j = i-1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
    puts("");
}

int main()
{
    unsigned long long num;
    int i,j;
    char n_converted[15];
    
    do
    {
        scanf("%llu", &num);
        if (num == 0)
        {
            puts("0");
            break;
        }
        
        convert(num, n_converted);
    }while(num != 0);

    return 0;
}