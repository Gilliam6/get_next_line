#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif
typedef struct s_list
{
	int				fd;
	char			*content;
	int				result;
	struct s_list	*next;
}	t_list;
int		get_next_line(int fd, char **line);
char	*ft_free_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int		ft_strlen(char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *s1);
char	*ft_custom_strjoin(char *content, char *buf);
t_list	*ft_lst_new_elem(int fd);

#endif
