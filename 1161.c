#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n != 0)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    int n, m;
    
    while (scanf("%d %d", &n, &m) != EOF)
    {
        printf("%llu\n", factorial(m) + factorial(n));
    }

    return 0;
}