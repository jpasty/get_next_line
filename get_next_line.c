/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpasty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:49:14 by jpasty            #+#    #+#             */
/*   Updated: 2019/05/09 14:20:10 by jpasty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				ft_next_line(char **hold)
{
	
}

int				get_next_line(const int fd, char **line)
{
	static char *hold[FD_MAX];
	char		buf[BUF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || !line || (read(fd, NULL, 0) < 0))
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE) > 0)
	{
		buf[ret] = '\0';
		if (!hold[fd])
			hold[fd] = ft_strnew(0);
		tmp = ft_strjoin(hold[fd], buf);
		free(hold[fd]);
		hold[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break;
	}
	if (ret == 0 && (hold[fd] == NULL || hold[fd][0] == '\0'))
		return (0);
	return (ft_next_line(&hold[fd], line, ret))
}
