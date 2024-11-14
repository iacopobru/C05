/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:52:31 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 12:27:35 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	can_place_queen(char *row, int now_row, int pos_in_row)
{
	int	i;

	i = 0;
	while (i < now_row)
	{
		if (((now_row - i) + row[i]) == pos_in_row)
			return (0);
		if (((row[i] - (now_row - i))) == pos_in_row)
			return (0);
		if (row[i] == pos_in_row)
			return (0);
		i++;
	}
	return (1);
}

void	recursive_search(char *row, int depth, int *count)
{
	int	new_queen_pos;
	int	i;

	if (depth == 10)
	{
		i = 0;
		while (i < 10)
		{
			write (1, &(char){row[i] + '0'}, 1);
			i++;
		}
		write (1, "\n", 1);
		(*count)++;
		return ;
	}
	new_queen_pos = 0;
	while (new_queen_pos <= 9)
	{
		if (can_place_queen(row, depth, new_queen_pos))
		{
			row[depth] = new_queen_pos;
			recursive_search(row, depth + 1, count);
		}
		new_queen_pos++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	row[10];
	int		count;

	count = 0;
	recursive_search(row, 0, &count);
	return (count);
}

// #include <stdio.h>
// int main(){
// 	printf("ris finale %d\n", ft_ten_queens_puzzle());
// }