/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:11:53 by moel-hib          #+#    #+#             */
/*   Updated: 2024/11/25 17:23:23 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (ft_putstr("(null)"));
	write(1, s, ft_strlen(s));
	len = ft_strlen(s);
	return (len);
}

int	ft_putnbr(long long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		len += ft_putnbr((n / 10));
	}
	len += ft_putchar('0' + (n % 10));
	return (len);
}

int	ft_unsigned_putnbr(unsigned long long n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_unsigned_putnbr((n / 10));
	}
	len += ft_putchar('0' + (n % 10));
	return (len);
}
