#include <stdio.h>

int calculate(float num)
{
    float r = num;
    int total = 0;
    while (r > 1)
    {
        total++;
        r /= 2;
    }

    return total;
}

int main()
{
    int n, i;
    float food_supply;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &food_supply);
        printf("%d dias\n", calculate(food_supply));
    }

    return 0;
}