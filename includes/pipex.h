/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 20:35:58 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:53:31 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>


void		ft_bzero(void *s, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendline_fd(char const *s, int fd);
void		*ft_memalloc(size_t size);
void		ft_putstr_fd(char const *s, int fd);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_strdelete(char **as);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strnjoin(char const *s1, char const *s2, size_t len_s2);
size_t		ft_strlen(const char *s1);
char		*ft_strnew(size_t size);
char		**ft_strsplit(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_toupper(int c);
char		*ft_strtoupper(char *str);
char		*ft_searchpath(char **paths, char *cmd);
char		**find(char **src, char *to_find);
int			findi(char **src, char *to_find);
int			len_arr(char **arr);
void		free_arr(char ***arr);
char		*get_path(char **envp, char **cmd);
int			ft_access(char *path);


#endif