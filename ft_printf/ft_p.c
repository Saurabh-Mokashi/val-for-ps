/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:02:06 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/10 17:47:27 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long long p)
{
	int	s;

	s = 0;
	s += ft_putstr("0x");
	s += ft_hexlower(p);
	return (s);
}
