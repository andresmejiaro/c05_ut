/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:13:49 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 17:03:29 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int n);

int main(void)
{
	int i=-1;
	printf("revisemos entre -1 y 100\n");
	while (i<101)
	{
		printf("%d: %d\n",i,ft_is_prime(i));
		i++;
	}	
	i= 41893;
	printf("%d: %d\n",i,ft_is_prime(i));
	i= 2000004023;
	printf("%d: %d\n",i,ft_is_prime(i));
	i= 2000004027;
	printf("%d: %d\n",i,ft_is_prime(i));
	return (0);
}

