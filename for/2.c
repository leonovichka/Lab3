#include "ft.h"

double summ2(double eps)
{
	double sum;
	int i;
	double a;
	
	i = 0;
	a = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
	sum = 0;
    for (i = 0; fabs(a) > eps; i++)
	{
		sum += a;
		a = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
	}
	return (sum);
}
