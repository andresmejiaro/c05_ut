/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:06:54 by amejia            #+#    #+#             */
/*   Updated: 2022/11/17 16:48:18 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb);

int main(void){

	int i=-10;
    
	while (i <100){
	printf("%d: %d\n",i,ft_sqrt(i));
	i++;
	}
}
