/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:02:05 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:09:47 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (s && (ptr = (char *)malloc(sizeof(char) * (len + 1))))
	{
		while (i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

char	*ft_strtoupper(char *str)
{
	char	*tmp;
	int		i;

	tmp = ft_strnew(ft_strlen(str));
	i = 0;
	while (*str)
	{
		tmp[i] = ft_toupper(*str);
		str++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}


