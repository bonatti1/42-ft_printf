/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libformat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:48:41 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/05/26 21:40:29 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_precisionchar(char *s, t_prtform *form)
{
	char *tmp;

	tmp = s;
	form->cis = ft_strlen(s);
	if (form->prc >= form->cis)
		return (s);
	s = ft_substr(s, 0, form->prc);
	free(tmp);
	return (s);
}

char	*ft_precisionint(char *s, t_prtform *form)
{
	int		aux;
	char	*temp;
	char	*temp2;

	form->cis = ft_strlen(s);
	if (form->prc == 0 && form->ngi == 0)
	{
		free(s);
		return (NULL);
	}
	aux = (form->prc > form->cis) ? form->prc - form->cis : 0;
	if (aux == 0)
		return (s);
	temp = (char *)malloc(sizeof(char) * (aux + 1));
	temp[aux] = '\0';
	while (--aux > -1)
		temp[aux] = '0';
	temp2 = ft_strjoin(temp, s);
	free(temp);
	free(s);
	return (temp2);
}

int		ft_padding(t_prtform *form)
{
	if (form->pad < 0)
		form->pch = ' ';
	form->pad *= (form->pad < 0) ? -1 : 1;
	if (form->siz >= form->pad)
		return (0);
	while (form->siz < form->pad)
	{
		if ((form->prc < form->pad) && form->prc != 0)
			ft_putchar_fd(' ', 1);
		else
			ft_putchar_fd(form->pch, 1);
		form->siz++;
	}
	//if (form->ngi < 0 && form->pch == '0' && (form->prc < form->pad))  // adicionado para negativo
//		ft_putchar_fd('-', 1);
	return (1);
}

char	*ft_negint(t_prtform *form, int i, char *s)
{
	char *temp;

	if (i < 0 && form->pch == ' ')
	{
		temp = ft_strjoin("-", s);
		free(s);
		s = temp;
	}
	return (s);
}
