#include <stdio.h>

unsigned long long int calculate(int num)
{
	return ((1ULL << num)/12)/1000; 
}

int main()
	{
	int i, tests, squares;
	scanf("%d", &tests);
	for (i = 0; i < tests; i++)
	{
		scanf("%d", &squares);
		if (squares == 64)
		{
		    printf("1537228672809129 kg\n");
		    continue;
		}
		printf("%llu kg\n", calculate(squares));
	}
	return 0;
}

