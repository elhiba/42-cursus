/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hib <moel-hib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:24:03 by moel-hib          #+#    #+#             */
/*   Updated: 2024/11/24 18:05:43 by moel-hib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define UHEXA "0123456789ABCDEF"
# define LHEXA "0123456789abcdef"

int	ft_printf(const char *data, ...);
int	ft_puthex(unsigned int c, char style);
int	ft_nb_puthex(unsigned long long n);
int	ft_address(void *ptr);
int	ft_strlen(char *s);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long long n);
int	ft_unsigned_putnbr(unsigned long long n);
int	ft_strdup(char *s);

#endif
