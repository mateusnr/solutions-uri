#include <stdio.h>
#include <math.h>

int main()
{
	int i, num2;
    double num1;
	int notes[] = {100, 50, 20, 10, 5, 2};
    int n2[] = {100, 50, 25, 10, 5, 1};
	
	scanf("%lf", &num1);

    puts("NOTAS:");
	for (i = 0; i < 6; i++)
	{
		printf("%d nota(s) de R$ %d.00\n", (int)num1/notes[i], notes[i]);
        num1 = num1-((int)(num1/notes[i])*notes[i]);
	}
   
    num2 = round(num1*100);

    puts("MOEDAS:");
    for (i = 0; i < 6; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n", (num2/n2[i]), n2[i]/100.0);
        num2 = num2-((num2/n2[i])*n2[i]);
    }

	return 0;
}