#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int main()
{
    int n, i, a, b;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a,b));
    }

    return 0;
}