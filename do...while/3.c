#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	i = 0;
	z = 0;
    do
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if ((i + 1) % k == 0)
		{
			i++;
			continue ;
		}
		printf("%.4lf ", z);
		i++;
	} while(i < n);
}
