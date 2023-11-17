/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:58:41 by fnascime          #+#    #+#             */
/*   Updated: 2023/11/16 16:48:00 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	i += ft_putstr_fd(s, fd);
	i += ft_putstr_fd("\n", fd);
	return (i);
}
