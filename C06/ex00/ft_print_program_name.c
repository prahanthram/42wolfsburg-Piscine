/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psubbiah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:13:50 by psubbiah          #+#    #+#             */
/*   Updated: 2026/10/07 19:19:30 by psubbiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_program_name(void)
{
	int	i;
	
	i = 0;
	char *file_name = __FILE__;
	while (file_name[i] != '\0')
	{
		write(1, &file_name[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_print_program_name();
	return (0);
}
