/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_block.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 18:51:57 by jle-quer          #+#    #+#             */
/*   Updated: 2016/02/24 17:30:59 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	display_block(t_struct *form, va_list va, int i)
{
	char	*ret;
	char	*str;

	ret = NULL;
	str = NULL;
	if (form->type == 's' || form->type == 'S')
		/*ret = */check_display_block_s(form, va);
	/*else if (form->type == 'p')
		ret = ;*/
	else if (form->type == 'd' || form->type == 'D' || form->type == 'i')
		str = set_d(form, va);
	else if (form->type == 'o' || form->type == 'O')
		str = set_octal(form, va);
	else if (form->type == 'u' || form->type == 'U')
		ret = check_display_block_u(form, va);
	else if (form->type == 'x' || form->type == 'X')
		ret = check_display_block_x(form, va);
	else if (form->type == 'c' || form->type == 'C')
		ret = check_display_block_c(form, va);
	ft_putstr(str);
	return (i);
}
