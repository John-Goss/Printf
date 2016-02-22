/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_display_block_o.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 12:58:21 by jle-quer          #+#    #+#             */
/*   Updated: 2016/02/22 13:17:27 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*check_display_block_o(t_struct *form, va_list va)
{
	unsigned long	p;
	char			*ret;

	if (form->l > 0 || form->ll > 0 || form->type == 'O')
		p = va_arg(va, unsigned long);
	else if (form->j > 0)
		p = va_arg(va, uintmax_t);
	else if (form->hh > 0)
		p = (unsigned char)va_arg(va, unsigned int);
	else if (form->h > 0)
		p = (unsigned short)va_arg(va, unsigned int);
	else if (form->z > 0)
		p = va_arg(va, size_t);
	else
		p = va_arg(va, unsigned int);
	ret = ft_itoa_base(p, 8);
	g_ret += ft_strlen(ret);
	return (ret);
}
