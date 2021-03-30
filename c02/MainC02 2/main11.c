/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 09:48:01 by wprestes          #+#    #+#             */
/*   Updated: 2019/12/06 21:03:25 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "C$%#oucou\e\etu va\ns bien ?\n";
	ft_putstr_non_printable(str);

}
