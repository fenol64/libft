/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:43:48 by fnascime          #+#    #+#             */
/*   Updated: 2023/12/04 13:15:09 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int final_number;
	int signal;

	i = 0;
	final_number = 0;
	signal = 1;
	while (ft_isspace(str[i]))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isalnum(str[i]))
	{
		if (ft_isdigit(str[i]))
			final_number = final_number * str_base + (str[i] - '0');
		else if (ft_isupper(str[i]))
			final_number = final_number * str_base + (str[i] - 'A' + 10);
		else if (ft_islower(str[i]))
			final_number = final_number * str_base + (str[i] - 'a' + 10);
		i++;
	}
	return (final_number * signal);
}