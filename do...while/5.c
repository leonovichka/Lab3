#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;

    i = 0;
    z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
    do
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if (z < 0)
        {
            return (i);
        }
        i++;
	} while (fabs(z) > eps);
    return (0);
}
