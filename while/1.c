#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	i = 0;
	sum = 0;
	while (i <= n - 1)
	{
		sum += pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		i++;
	}
	return (sum);
}
