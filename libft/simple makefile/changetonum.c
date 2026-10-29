#include "g.h"

int changetonum(const char *nptr)
{
	int	sign;
	long long	result;
	
	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <=13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * sign));
}
