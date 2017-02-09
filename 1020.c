#include <stdio.h>

int main()
{
	unsigned int num;
	scanf("%ud", &num);

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", num/365, (num%365)/30, num%365%30);

	return 0;
}
