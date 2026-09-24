/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psubbiah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:50:25 by psubbiah          #+#    #+#             */
/*   Updated: 2026/09/24 18:15:04 by psubbiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.c>
void ft_print_alphabet(void){
	char c;
	c = 'a'
	while( c <='z'){
		printf("%c ", c);
		c++;
		
	}
}
int main(void){
	ft_print_alphabet(void);
	return (0);
}
