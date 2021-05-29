/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:12:42 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:13:30 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

void		free_arr(char ***arr)
{
	int	i;

	i = 0;
	if (!arr)
		return ;
	while ((*arr)[i])
	{
		ft_strdelete(*arr + i);
		i++;
	}
	free(*arr);
	*arr = NULL;
}

char		*get_path(char **envp, char **cmd)
{
	char	**paths;
	char	*path;

	paths = ft_strsplit(envp[0] + 5, ':');
	path = ft_searchpath(paths, *cmd);
	free_arr(&paths);
	return (path);
}

int			ft_access(char *path)
{
	if (access(path, F_OK) == -1)
		ft_putstr_fd("open: no such file or directory\n", 2);
	else if (access(path, R_OK) == -1)
		ft_putstr_fd("open: permission denied\n", 2);
	else if (access(path, W_OK) == -1)
		ft_putstr_fd("open: permission denied\n", 2);
	else
		return (1);
	return (0);
}
