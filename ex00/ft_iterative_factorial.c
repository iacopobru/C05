/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:26:48 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 00:34:41 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb >= 1)
	{
		result *= nb--;
	}
	return (result);
}

// #include <stdio.h>
// int main(){
// 	printf("%d\n", ft_iterative_factorial(5));
// }