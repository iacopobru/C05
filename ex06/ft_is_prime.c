/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrunial <ibrunial@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:21:56 by ibrunial          #+#    #+#             */
/*   Updated: 2024/11/14 10:38:37 by ibrunial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

// #include <stdio.h>
// int main(){
// 	printf("%d\n", ft_is_prime(7));
// }