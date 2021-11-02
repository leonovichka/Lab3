#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
	for(i = 0; ; i++)
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if (fabs(z) < eps)
        {
            break ;
        }
	}
	return (i);
}
