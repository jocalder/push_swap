/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:49:26 by jocalder          #+#    #+#             */
/*   Updated: 2024/10/01 17:26:51 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/*
int main() 
{
	 ft_putnbr_fd(-68245, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(9823, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
	{
		 return (1);
	}
	ft_putnbr_fd(-923649, fd);
	close(fd);
	return 0;
}*/
