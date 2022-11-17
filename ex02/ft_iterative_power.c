/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:23:49 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 16:10:22 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int i;

	i=0;
	while (i < 32)
	{
		printf("2 a la potencia es %d %d \n",i,ft_iterative_power(2,i));
		i++;
	}
	return (0);
}
