/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <giromeo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:17:25 by giromeo           #+#    #+#             */
/*   Updated: 2024/05/22 16:17:30 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GET_NEXT_LINE_BONUS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_free(char **str);
#endif