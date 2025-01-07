/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:49:12 by moel-hib          #+#    #+#             */
/*   Updated: 2024/11/14 20:52:19 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main ()
{
	int p = 1;

	ft_memset(&p, 57, 1);
	ft_memset((char *)&p + 1, 5, 1);

	printf("%d", p);
}
