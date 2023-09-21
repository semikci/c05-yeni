/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:10:01 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/19 15:45:00 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index < 0)
		return (-1);
	else if (index > 0)
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	return (0);
}
