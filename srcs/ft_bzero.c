/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:59:34 by jle-quer          #+#    #+#             */
/*   Updated: 2016/02/15 12:31:15 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	size_t cpt;

	cpt = 0;
	if (n > 0)
	{
		while (cpt < n)
		{
			((char *)s)[cpt] = '\0';
			cpt++;
		}
	}
	((char *)s)[cpt] = '\0';
}
