/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brtucker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 19:18:19 by brtucker          #+#    #+#             */
/*   Updated: 2018/10/01 11:01:57 by brtucker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char *ptr;

	if (s == NULL)
		return ;
	ptr = (char *)s;
	while (*ptr)
		ft_putchar_fd(*ptr++, fd);
}
