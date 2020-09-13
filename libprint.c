/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:45:56 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/26 21:51:51 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_pchr(char c, t_prtform *form)
{
	form->siz = 1;
	if (form->pad > 0)
		ft_padding(form);
	ft_putchar_fd(c, 1);
	if (form->pad < 0)
		ft_padding(form);
	return (1);
}

int		ft_phex(long long int i, t_prtform *form, int swt)
{
	char	*s;
	char	*temp;

	form->ngi = i;
	s = ft_itoabase(i, 16);
	if (form->hpr)
		s = ft_precisionint(s, form);
	form->siz = ft_strlen(s);
	if (swt == 1)
		ft_uppercase(s);
	if (!i && !form->prc && form->hpr)
	{
		free(s);
		s = NULL;
	}
	if (swt == 2)
	{
		temp = ft_strjoin("0x", s);
		free(s);
		s = temp;
		form->siz += 2;
	}
	ft_printpad(form, s);
	return (form->siz);
}

int		ft_pint(int i, t_prtform *form)
{
	char	*s;
	int		num;

	num = (i < 0) ? i * -1 : i;
	form->ngi = i;
	s = (ft_testprcpad(form, num)) ? ft_strdup(" ") : ft_itoabase(num, 10);
	if (form->hpr)
		s = ft_precisionint(s, form);
	s = ft_negint(form, i, s);
	if (i < 0 && form->pch == '0' && (form->prc >= form->pad || form->prc >= form->pad * -1))
		ft_putchar_fd('-', 1);
	form->siz = ft_strlen(s);
	form->pad -= (i < 0 && (form->pch == '0')) ? 1 : 0;
	if (!i && !form->prc && form->hpr)
	{
		free(s);
		s = NULL;
	}
	ft_printpad(form, s);
	return (form->siz + ((i < 0 && form->pch == '0') ? 1 : 0));
}

int		ft_pstr(char *s, t_prtform *form)
{
	if (!s)
	{
		s = ft_strdup("(null)");
	}
	if (form->hpr)
		s = ft_precisionchar(s, form);
	form->siz = ft_strlen(s);
	ft_printpad(form, s);
	return (form->siz);
}

int		ft_puin(unsigned int i, t_prtform *form)
{
	char	*s;

	form->ngi = i;
	s = ft_itoabase(i, 10);
	if (form->hpr)
		s = ft_precisionint(s, form);
	form->siz = ft_strlen(s);
	if (!i && !form->prc && form->hpr)
	{
		free(s);
		s = NULL;
	}
	ft_printpad(form, s);
	return (form->siz);
}
