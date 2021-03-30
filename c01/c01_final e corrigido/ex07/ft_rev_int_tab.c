/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:48:09 by fgomes-n          #+#    #+#             */
/*   Updated: 2019/12/09 19:48:15 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int dest;

	size = size - 1;
	i = 0;
	while (i < size)
	{
		dest = tab[i];
		tab[i] = tab[size];
		tab[size] = dest;
		i++;
		size--;
	}
}
