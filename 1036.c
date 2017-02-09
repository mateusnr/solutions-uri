#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float delta, total_p, total_m;
	scanf("%f %f %f", &a, &b, &c);

	delta = (b*b)-4*a*c;
	if (delta < 0 || !a)
	{
		puts("Impossivel calcular");
		return 0;
	}

	total_p = (-b + sqrt(delta))/(2*a);
	total_m = (-b - sqrt(delta))/(2*a);

	printf("R1 = %.5f\n", total_p);
	printf("R2 = %.5f\n", total_m);

	return 0;
}
