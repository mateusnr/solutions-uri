#include <stdio.h>

int main()
{
	int num, i;
	int notes[] = {100, 50, 20, 10, 5, 2, 1};
	
	scanf("%d", &num);
	printf("%d\n", num);
	for (i = 0; i < 7; i++)
	{
		printf("%d nota(s) de R$ %d,00\n", num/notes[i], notes[i]);
		num %= notes[i];
	}

	return 0;
}
