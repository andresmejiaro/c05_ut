/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:19:36 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 17:36:48 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int i;
	int j;
	
	printf("Los primeros 100 primos son:\n");
	j=1;
	i=1;
	while (j<= 100)
	{
		i=ft_find_next_prime(i);
		printf("%d,",i);
		j++;
	}
	printf("el proximo primo de 2000004023 deberia ser 2000004043\n");
	printf("%d",ft_find_next_prime(2000004023));
	return (0);
}
