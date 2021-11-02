#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
    do
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if (fabs(z) < eps)
        {
            break ;
        }
        i++;
	} while (fabs(z) > eps);
	return (i);
}
