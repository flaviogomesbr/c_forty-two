/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprestes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 17:53:51 by wprestes          #+#    #+#             */
/*   Updated: 2019/11/30 09:02:00 by wprestes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	int c;
	c =	ft_str_is_alpha("kdeijoJNdonOUDHnjsndjbsds");
	printf("others = %d\n", c);
	c =	ft_str_is_alpha("9834023948230oJIOJ(678¨&*%¨(%");
	printf("only_alpha = %d\n", c);
	c =	ft_str_is_alpha("");
	printf("empty  = %d\n", c);

}
