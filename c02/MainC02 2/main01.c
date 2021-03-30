/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:34:21 by wprestes          #+#    #+#             */
/*   Updated: 2019/12/06 17:11:40 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "hello";
	char dest[] = "boomerama!!";
	int n = 3;

	printf("Dest before = %s\n", dest);

	printf("my fn = %s\n =", ft_strncpy(dest, src, n));

	printf("Dest  after = %s\n", dest);
	printf("With strncpy lib = %s\n", strncpy(dest, src, n));

}
