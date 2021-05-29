/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:24:43 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 17:04:17 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n-- != 0)
	{
		*tmp = 0;
		tmp++;
	}
}

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size <= 0)
		return (NULL);
	if ((ptr = (char *)malloc(size)))
	{
		ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char*)ft_memalloc((size + 1) * sizeof(char));
	return (ptr);
}