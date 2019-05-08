<<<<<<< HEAD
#include "get_next_line.h"

int				ft_next_line(char **line, const int fd, char **hold, int ret)
{

}

int				get_next_line(const int fd, char **line)
{
	static char *hold[FD_MAX];
	char		buf[BUF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || !line)
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE) > 0)
	{
		buf[ret] = '\0';
		if (!hold[fd])
			hold[fd] = ft_strnew(1);
		tmp = ft_strjoin(hold[fd], buf);
		free(hold[fd]);
		hold[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (hold[fd] == NULL || line[fd][0] == '\0'))
		return (0);
	return (ft_next_line(line, fd, hold, ret))
}
=======
#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	static char **line;
	char		*buf[BUF_SIZE + 1];
	int			ret;
	
}
>>>>>>> 82c02238f4aed1ea661de68074313a7df5659992
