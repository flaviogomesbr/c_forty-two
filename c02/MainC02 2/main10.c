/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:24:47 by wprestes          #+#    #+#             */
/*   Updated: 2019/12/06 20:32:13 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{

	char src[] = "hello";
	char dest[] = "goodbye";
	int	size = 4;

//	printf("strlcpy  srcsize =  %lu\n", strlcpy(dest, src, size));
//	printf("strlcpy  dest =  %s\n", dest);

	printf("ft_strlcpy  srcsize =  %u\n", ft_strlcpy(dest, src, size));
	printf("ft_strlcpy  dest =  %s\n", dest);

}
