#include "libft.h"

intmax_t	ft_power(intmax_t n, long pow)
{
	if (pow == 0)
		return (1);
	return (n * ft_power(n, pow - 1));
}