#include <stdio.h>

int joseph(int n, int k)
{
	if (n == 1)
		return 0;
	else
		return (joseph(n-1, k) + k) % n;
}

int main()
{
	int number_cases, i;
	int people, step;
	scanf("%d", &number_cases);
	
	for (i = 0; i < number_cases; i++)
	{
		scanf("%d %d", &people, &step);
		printf("Case %d: %d\n", i+1, joseph(people, step) + 1);
	}
	return 0;
}
