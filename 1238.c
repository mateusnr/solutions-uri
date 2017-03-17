#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], final[105];
    char *suf;
    int n, i, j, size_1, size_2, lim;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", str1);
        scanf("%s", str2);
        size_1 = strlen(str1), size_2 = strlen(str2); //tamanho das duas strings
        if (size_1 > size_2)
        {
            lim = size_2; //se str1 > str2, lim vai receber size_2
            suf = str1+lim; //suf vai apontar pra str1[size_2]->str1[strlen(str1) - 1] 
                            //ou seja, o resto da string (não inclui a mistura de str1 e str2)
        }
        else
        {
            lim = size_1; //mesma lógica aqui
            suf = str2+lim;
        }

        for (i = 0, j = 0; i < lim; i++)
        {
            final[j++] = str1[i]; //mistura
            final[j++] = str2[i];
        }

        final[j] = '\0';
        strcat(final, suf); //juntando
        printf("%s\n", final);
    }
    return 0;
}