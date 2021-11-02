#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	i = 0;
	sum = 0;
    do
	{
		sum += pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		i++;
	} while (i < n);
	return (sum);
}

