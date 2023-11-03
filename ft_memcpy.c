/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:52:23 by fnascime          #+#    #+#             */
/*   Updated: 2023/10/23 12:17:10 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ret;
	char	*origin;

	if (!dest && !src)
		return (NULL);
	ret = (char *) dest;
	origin = (char *) src;
	i = 0;
	while (i < n)
	{
		ret[i] = origin[i];
		i++;
	}
	return (dest);
}
