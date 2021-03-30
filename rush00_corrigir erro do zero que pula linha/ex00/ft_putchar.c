/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:06:14 by sfreitas          #+#    #+#             */
/*   Updated: 2019/11/25 19:18:40 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Biblioteca responsavel por impreçao de textos
*/

int	putchar(char caracter)
{
	write(1, &caracter, 1);
	return (0);
}
