/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldutriez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:45:24 by ldutriez          #+#    #+#             */
/*   Updated: 2019/11/07 08:37:02 by ldutriez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# define IS_A_LINE 1
# define IS_AN_END 0
# define IS_AN_ERROR -1
# define STRLEN 0
# define EOL 1
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);

char	*ft_stradd(const char *bucket, const char *cup);
int		ft_slen_eol(const char *str, int use);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
char	*ft_makeline(char *bucket);
char	*ft_rm_line(char *bucket);

#endif
