#ifndef MYUTILS_H
# define MYUTILS_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>

int		my_printlen(char *str);
char	*my_ith(size_t nb);
char	*my_strrev(char *str);
char	*my_strcat(char *s1, char *s2);
void	*my_realloc(void *ptr, size_t nsize);
char	*my_strtoupper(char *str);
size_t	my_memsize(void *ptr);

#endif
