/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:21:31 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:08:31 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	if (s1 && s2\
	&& (ptr = (char *)\
		malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		ft_strcpy(ptr, s1);
		i = (ft_strlen(s1) == 0) ? 0 : ft_strlen(s1) - 1;
		ft_strcat(&ptr[i], s2);
	}
	return (ptr);
}

char	*ft_strnjoin(char const *s1, char const *s2, size_t len_s2)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	if (!s1)
		s1 = "";
	if (s2
		&& (ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + len_s2 + 1))))
	{
		ft_strcpy(ptr, s1);
		i = (ft_strlen(s1) == 0) ? 0 : ft_strlen(s1) - 1;
		ft_strncat(&ptr[i], s2, len_s2);
	}
	return (ptr);
}
