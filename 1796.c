#include <stdio.h>

int main()
{
	int quantity, yes = 0, no = 0, opinion;
	int i;
	scanf("%d", &quantity);
	for (i = 0; i < quantity; i++)
	{
		scanf("%d", &opinion);
		if (opinion == 0)
			yes++;
		else
			no++;
	}

	if (yes > no)
		printf("Y\n");
	else
		printf("N\n");

	return 0;
}
