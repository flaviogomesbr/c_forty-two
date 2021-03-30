/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:20:01 by fgomes-n          #+#    #+#             */
/*   Updated: 2019/12/12 15:20:08 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (k == 1)
			{
				str[i] -= 32;
				k = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			k = 0;
		else
			k = 1;
		i++;
	}
	return (str);
}
