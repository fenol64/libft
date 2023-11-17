#include "get_next_line.h"

char	*read_file(int fd)
{
	int			read_return;
	char		*line;
	static char	*res[MAX_FD] = {NULL};

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!line)
		return (NULL);
	read_return = 1;
	while (read_return > 0 && !find_current_line(res[fd]))
	{
		read_return = read(fd, line, BUFFER_SIZE);
		if (read_return < 0)
		{
			free(line);
			return (NULL);
		}
		line[read_return] = '\0';
		res[fd] = ft_free_first_strjoin(res[fd], line);
	}
	free(line);
	if (!res[fd])
		return (NULL);
	line = return_current_line(res[fd]);
	res[fd] = return_after_sep(res[fd]);
	return (line);
}

char	*get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	return (read_file(fd));
}
