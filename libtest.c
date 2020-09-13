/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:49:50 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/26 21:52:32 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_testint(char c)
{
	if (*ft_strchr("cid", c) == c)
		return (1);
	else
		return (0);
}

int		ft_testllint(char c)
{
	if (*ft_strchr("uxXp", c) == c)
		return (1);
	else
		return (0);
}

int		ft_isvalid(char c)
{
	if (*ft_strchr("%csiduxpXn", c) == c && c != '\0')
		return (1);
	else
		return (0);
}

void	ft_padtest(t_prtform *form)
{
	if (*ft_strchr("cp", form->typ) == form->typ)
		form->pch = ' ';
}

int		ft_testprcpad(t_prtform *form, int num)
{
	if (form->hpr && !form->prc && !num)
		return (1);
	return (0);
}
