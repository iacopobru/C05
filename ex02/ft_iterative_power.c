/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:35:19 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 00:42:33 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	result = nb;
	while (i++ < power)
		result *= nb;
	return (result);
}

// #include <stdio.h>
// int main(){
// 	printf("%d\n", ft_iterative_power(5, 0));
// }