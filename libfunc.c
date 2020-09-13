/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfunc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 11:25:45 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/26 20:42:33 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    ft_printpad(t_prtform *form, char *s)
{
	if (!s && form->hpr && !form->prc && form->pch == '0')
		form->pch = ' ';
	if (form->pad > 0)
		ft_padding(form);
	ft_putstr_fd(s, 1);
	if (form->pad < 0)
		ft_padding(form);
	free(s);
}