/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:38:40 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/19 17:39:42 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	i = 1;
	if (nb > 0)
	{
		while ((i * i) <= number)
		{
			if ((i * i) == number)
				return (i);
			i++;
		}
	}
	return (0);
}
