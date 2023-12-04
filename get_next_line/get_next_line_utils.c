/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:33:05 by fnascime          #+#    #+#             */
/*   Updated: 2023/12/04 13:08:52 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int find_current_line(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char *return_current_line(char *res)
{
	int i;
	int check;
	int size;
	char *line;

	size = 0;
	check = 0;
	while (res[size] && res[size] != '\n')
		size++;
	if (res[size] == '\n')
		check++;
	line = malloc((size + check + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		line[i] = res[i];
		i++;
	}
	if (res[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char *return_after_sep(char *res)
{
	char *new_res;
	int i;
	int size;

	size = 0;
	while (res[size] && res[size] != '\n')
		size++;
	if (!res[size])
	{
		free(res);
		return (NULL);
	}
	size++;
	new_res = malloc((ft_strlen(res) - size + 1) * sizeof(char));
	if (!new_res)
		return (NULL);
	i = 0;
	while (res[size + i])
	{
		new_res[i] = res[size + i];
		i++;
	}
	new_res[i] = '\0';
	free(res);
	return (new_res);
}

