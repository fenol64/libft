/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:38:08 by fnascime          #+#    #+#             */
/*   Updated: 2023/10/21 15:31:48 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == 32) || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		final_number;
	int		signal;

	i = 0;
	final_number = 0;
	signal = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		final_number = final_number * 10 + (nptr[i] - '0');
		i++;
	}
	return (final_number * signal);
}
