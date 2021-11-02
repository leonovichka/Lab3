#include "ft.h"

int findFirstNegativeElement(double eps)
{
    int i;
    double z;

    z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
    for (i = 0; ; i++)
	{
		z = pow(-1, i)*((1 + 3*i)/(pow(3, i)));
		if (fabs(z) > eps && z < 0)
        {
            return (i);
        }
	}
}
