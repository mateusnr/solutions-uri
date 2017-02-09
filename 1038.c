#include <stdio.h>

int main()
{	
	float prices[] = {0, 4, 4.5, 5, 2, 1.5};
	int product, amount;

	scanf("%d %d", &product, &amount);
	printf("Total: R$ %.2f\n", prices[product]*amount);

	return 0;
}
