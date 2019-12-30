#include "ft_printf.h"

/*size_t	digit_count(long nb, int base)
{
	size_t		i;

	i = 0;
	while (nb)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

char    *ft_itoa_base_int(va_list args, char *base)
{
	char	*ret;
	int		number_size;
	int		i;
    int     base_size;
	int		tmp;
	
	tmp = args;
    base_size = ft_strlen(base);

    tmp < 0 ? args = 4294967295 - tmp : 0;
	number_size = digit_count(tmp, base_size);
	if (!(ret = (char *)malloc(sizeof(char) * (number_size + 1))))
		return (NULL);
	i = 1;
	while (tmp != 0)
	{
		ret[number_size - i++] = base[tmp % base_size];
		tmp /= base_size;
	}
	ret[number_size] = '\0';
	return (ret);
}

char		*ft_itoa_base_unsigned_int(va_list args, char *base)
{
	char	*ret;
	int		number_size;
	int		i;
    int     base_size;
	unsigned long int		tmp;
	
	tmp = args;
    base_size = ft_strlen(base);

    tmp < 0 ? args = 4294967295 - tmp : 0;
	number_size = digit_count(tmp, base_size);

	if (!(ret = (char *)malloc(sizeof(char) * (number_size + 1))))
		return (NULL);
	i = 1;
	while (tmp != 0)
	{
		ret[number_size - i++] = base[tmp % base_size];
		tmp /= base_size;
	}
	ret[number_size] = '\0';
	return (ret);
}*/



char	*ft_itoa(int nb)
{
	int long	len;
	char		*str;
	long int	n;

	len = ft_intlen(nb);
	n = nb;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[len--] = 48 + (n % 10);
		n = n / 10;
	}
	return (str);
}
