/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_display_block_s.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 19:11:12 by jle-quer          #+#    #+#             */
/*   Updated: 2016/02/15 13:01:21 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_display_block_s(t_struct *form, va_list va)
{
	if (form->l <= 0 && form->type == 's')
		ft_putstr(va_arg(va, char *));
	else if (form->l > 0 || form->type == 'S')
		ft_putwstr(va_arg(va, wchar_t*));
}
