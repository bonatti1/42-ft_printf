/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 09:55:12 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/23 12:04:10 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_doprintf(const char *str, va_list lst)
{
	t_prtform	form;
	int			count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_formparser(&form, str, lst);
			if (form.chf == 0)
				return (0);
			ft_padtest(&form);
			str += form.chf;
			ft_vprintf(&form, lst, count);
			count += (form.pad > form.siz) ? form.pad : form.siz;
		}
		else
		{
			ft_putchar_fd(*str++, 1);
			count++;
		}
	}
	return (count);
}

int		ft_printf(const char *str, ...)
{
	int		result;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	result = ft_doprintf((char *)str, args);
	va_end(args);
	return (result);
}
