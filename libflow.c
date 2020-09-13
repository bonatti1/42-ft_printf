/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libflow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:42:14 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/26 21:12:05 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_vprintf(t_prtform *form, va_list lst, int count)
{
	char			*strarg;
	int				argint;
	long long int	argllint;

	if (form->typ == '%')
		form->siz = ft_pchr('%', form);
	if (ft_testint(form->typ))
	{
		argint = va_arg(lst, int);
		form->siz = ft_redint(argint, form);
	}
	if (ft_testllint(form->typ))
	{
		argllint = va_arg(lst, long long int);
		form->siz = ft_redllint(argllint, form);
	}
	if (form->typ == 's')
	{
		strarg = ft_strdup(va_arg(lst, char *));
		form->siz = ft_pstr(strarg, form);
	}
	if (form->typ == 'n')
		ft_pn(count, va_arg(lst, int*));
	form->pad *= (form->pad < 0) ? -1 : 1;
	return (form->siz);
}

int		ft_redint(int n, t_prtform *form)
{
	if (form->typ == 'd' || form->typ == 'i')
		form->siz = ft_pint(n, form);
	if (form->typ == 'c')
		form->siz = ft_pchr(n, form);
	if (form->typ == '%')
		form->siz = ft_pchr('%', form);
	return (form->siz);
}

int		ft_redllint(long long int n, t_prtform *form)
{
	if (form->typ == 'u')
		form->siz = ft_puin(n, form);
	if (form->typ == 'x')
		form->siz = ft_phex(n, form, 0);
	if (form->typ == 'X')
		form->siz = ft_phex(n, form, 1);
	if (form->typ == 'p')
		form->siz = ft_phex(n, form, 2);
	return (form->siz);
}

void	ft_pn(int length, int *ptr)
{
	*ptr = length;
}