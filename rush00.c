/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkiyoshi <lkiyoshi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:25:32 by andgomes          #+#    #+#             */
/*   Updated: 2023/03/21 11:38:47 by lkiyoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	choose(int x, int y, int max_x, int max_y)
{
	if (max_x == 1 && max_y == 1)
		return ('/');
	if (!((max_y == 1 && x == max_x) && (max_x == 1 && y == max_y)))
		if ((x == 0 && y == 0) || (x == max_x && y == max_y))
			return ('/');
	if ((x == max_x && y == 0) || (x == 0 && y == max_y))
		return ('\\');
	else if ((max_y == 1 && x == max_x) || (max_x == 1 && y == max_y))
		return ('\\');
	if (x == 0 || y == 0 || x == max_x || y == max_y)
		return ('*');
	return (' ');
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			column = column + 1;
		}
		ft_putchar('\n');
		line = line + 1;
	}
}
