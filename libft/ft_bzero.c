/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:48:52 by jocalder          #+#    #+#             */
/*   Updated: 2024/09/25 13:50:08 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p1;

	i = 0;
	p1 = (unsigned char *)s;
	while (i < n)
	{
		p1[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[] = "hello carnal";
	ft_bzero(str, 4);
	printf("%s\n", str + 3);
	return (0);
}*/
