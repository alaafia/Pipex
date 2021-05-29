/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendline_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:22:39 by alaafia           #+#    #+#             */
/*   Updated: 2021/05/29 15:22:48 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <pipex.h>

void	ft_putendline_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}