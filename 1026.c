#include <stdio.h>

int main()
{
	long long unsigned int a,b;
	while(scanf("%llu %llu", &a, &b) != EOF)
		printf("%lld\n", a ^ b);

	return 0;
}
