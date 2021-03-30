/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 09:20:14 by wprestes          #+#    #+#             */
/*   Updated: 2019/11/30 09:32:22 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	int c;
	c =	ft_str_is_uppercase("kdeijoJNdon98 9898 OUDHnjsndjbsds");
	printf("others = %d\n", c);
	c =	ft_str_is_uppercase("LEJFELFMELIOJPESMPNVINPIJSF");
	printf("only_uppercase = %d\n", c);
	c =	ft_str_is_uppercase("");
	printf("empty  = %d\n", c);

}
