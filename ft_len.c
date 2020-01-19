#include "ft_printf.h"

int	ft_count_nbr(const char *str, int *i)
{
	int nbr;
	
	nbr = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		nbr = nbr * 10 + (str[*i] - 48);
		*i = *i + 1;
	}
	return (nbr);
}

int	ft_intlen(int n)
{
	int		len;

	if (n == 2147482647)
		return (11);
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	ft_unsigned_len(unsigned int nb)
{
	size_t		size;

	size = 1;
	if (nb < 0)
		size++;
	while ((nb /= 10))
		size++;
	return (size);
}

int	ft_hexa_len(unsigned int nb)
{
	unsigned int		len;

	len = 0;
	if (nb == 0)
		len = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}