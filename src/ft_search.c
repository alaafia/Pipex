/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:06:04 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:10:54 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

char		*ft_searchpath(char **paths, char *cmd)
{
	int				i;
	char			*path;
	char			*part_path;

	i = 0;
	while (paths[i] && cmd[1] != '/')
	{
		part_path = ft_strjoin(paths[i], "/");
		path = ft_strjoin(part_path, cmd);
		ft_strdelete(&part_path);
		if (access(path, F_OK) == 0)
			return (path);
		ft_strdelete(&path);
		i++;
	}
	if (cmd[0] == '/')
		return ("");
	if (access(cmd, F_OK) == 0)
		return (cmd);
	return (NULL);
}

char	**find(char **src, char *to_find)
{
	int	i;

	i = 0;
	to_find = ft_strtoupper(to_find);
	while (src[i] && ft_strncmp(src[i], to_find, ft_strlen(to_find)))
		i++;
	return (&(src[i]));
}

int		findi(char **src, char *to_find)
{
	int	i;

	i = 0;
	while (src[i] && ft_strncmp(src[i], to_find, ft_strlen(to_find)))
		i++;
	return (i);
}

int		len_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

