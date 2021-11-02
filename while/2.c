#include "ft.h"

double summ2(double eps)
{
	double sum;
	int i;
	double a;
	
	i = 0;
	a = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
	sum = 0;
	while (fabs(a) > eps)
	{
		sum += a;
		a = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		i++;
	}
	return (sum);
}
