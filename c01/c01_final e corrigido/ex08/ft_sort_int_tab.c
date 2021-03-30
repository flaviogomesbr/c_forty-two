/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:48:53 by fgomes-n          #+#    #+#             */
/*   Updated: 2019/12/09 19:49:12 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int i_max;
	int aux;

	i = 0;
	i_max = i + 1;
	size = size - 1;
	while (i < size)
	{
		if (tab[i] > tab[i_max])
		{
			aux = tab[i];
			tab[i] = tab[i_max];
			tab[i_max] = aux;
			i = 0;
			i_max = i + 1;
		}
		else
		{
			i++;
			i_max++;
		}
	}
}
