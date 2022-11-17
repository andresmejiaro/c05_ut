/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:30:29 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 16:42:25 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int main (void){

	int i= -1;
	printf("presentando la sequencia de Fibonacci:\n");
	while (i < 30)
	{
		printf("%d: %d\n",i,ft_fibonacci(i));	
		i++;
	}	
}
