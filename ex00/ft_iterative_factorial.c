/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:55:54 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 15:53:30 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int i;

	for(i=0;i<14;i++)
	{
		printf("El factorial de %d es %d\n",i,ft_iterative_factorial(i));
	}
	return 0;
	
}
