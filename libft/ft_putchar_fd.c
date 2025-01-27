/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:55:51 by jocalder          #+#    #+#             */
/*   Updated: 2024/10/01 12:41:18 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	ft_putchar_fd('f', 1);
	int fd = open("test.text", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
		return (1);
	ft_putchar_fd('f', fd);
	close(fd);
	return 0;
}*/
