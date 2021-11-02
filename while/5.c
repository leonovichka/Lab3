#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;

    i = 0;
    z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
	while (fabs(z) > eps)
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if (z < 0)
        {
            return (i);
        }
        i++;
	}
    return (0);
}

