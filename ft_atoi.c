/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:53:45 by ytakii            #+#    #+#             */
/*   Updated: 2022/03/01 18:31:05 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nega;

	i = 0;
	nega = 1;
	while (*str == ' ' || ('\t' <= *str && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		nega = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	i = i * nega;
	return (i);
}
/*
int main(void)
{
	char str[] = "-12345";
	
	printf("%s\n",str);
	printf("%d\n",atoi(str));
	printf("%d\n",ft_atoi(str));
	return (0);
}*/
