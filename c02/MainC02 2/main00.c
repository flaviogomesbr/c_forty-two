/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:54:08 by wprestes          #+#    #+#             */
/*   Updated: 2019/12/03 15:39:19 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char here[] = "hello";
	char there[]= "baby!";

	printf("There before = %s\n", there);

	ft_strcpy(there, here);

	printf("There after = %s\n", there);
	printf("With strcpy lib = %s\n", strcpy(there, here));

}
