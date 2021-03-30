/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:27:29 by vribeiro          #+#    #+#             */
/*   Updated: 2019/11/24 15:53:08 by vribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		putchar(char caracter);

/*
** Variaveis responsaveis por receber os valores de linhas e colunas
** funçao global_def declarada para melhor entendimento do codigo
** ficando proximo da declaracao das variaveis globais
*/

int g_nline;
int g_ncol;

void	global_def(int ncol, int nline)
{
	g_nline = nline;
	g_ncol = ncol;
}

void	print_top(char char_left, char char_right, char char_cent)
{
	int	cont_col;

	if (g_nline > 0 && g_ncol > 0)
	{
		cont_col = 1;
		while (cont_col <= g_ncol)
		{
			if (cont_col == 1)
				putchar(char_left);
			else if (cont_col == g_ncol)
				putchar(char_right);
			else
				putchar(char_cent);
			cont_col++;
		}
		putchar('\n');
	}
}

void	print_body(char char_left, char char_right, char char_cent)
{
	int		cont_line;
	int		cont_col;

	cont_line = 2;
	cont_col = 1;
	while (cont_line < g_nline)
	{
		while (cont_col <= g_ncol)
		{
			if (cont_col == 1)
				putchar(char_left);
			else if (cont_col == g_ncol)
				putchar(char_right);
			else
				putchar(char_cent);
			cont_col++;
		}
		cont_col = 1;
		putchar('\n');
		cont_line++;
	}
}

void	print_bottom(char char_left, char char_right, char char_cent)
{
	int	cont_col;

	if (g_nline > 1 && g_ncol > 0)
	{
		cont_col = 1;
		while (cont_col <= g_ncol)
		{
			if (cont_col == 1)
				putchar(char_left);
			else if (cont_col == g_ncol)
				putchar(char_right);
			else
				putchar(char_cent);
			cont_col++;
		}
		putchar('\n');
	}
}

int		rush(int x, int y)
{
	global_def(x, y);
	print_top('A', 'C', 'B');
	print_body('B', 'B', ' ');
	print_bottom('A', 'C', 'B');
	return (0);
}
