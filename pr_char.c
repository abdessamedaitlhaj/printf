/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lha <aait-lha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:53:10 by aait-lha          #+#    #+#             */
/*   Updated: 2023/12/13 22:56:08 by aait-lha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pr_char(va_list *args)
{
	char	chr;

	chr = va_arg(*args, int);
	write(1, &chr, 1);
	return (1);
}
