/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:50:49 by wprestes          #+#    #+#             */
/*   Updated: 2019/12/02 19:41:00 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	int c;
	c =	ft_str_is_printable("\n");
	printf("others = %d\n", c);
	c =	ft_str_is_printable("LEJFELFMELIOJP\nESMPNVINPIJSF");
	printf("only_uppercase = %d\n", c);
	c =	ft_str_is_printable("");
	printf("empty  = %d\n", c);

}
