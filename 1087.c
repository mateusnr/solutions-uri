#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, y1, y2;

    while (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && (x1 || x2 || y1 || y2))
    {
        if (x1 == x2 && y1 == y2)
            puts("0");
        else if(x1 == x2 || y1 == y2 || x1+y1 == x2+y2 || x1-y1 == x2-y2)
            puts("1");
        else
            puts("2");
    }
    return 0;
}
