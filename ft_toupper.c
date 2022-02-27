/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:26:31 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:01:59 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		i = c - ('a' - 'A');
		return (i);
	}
	return (c);
}
/*
int main(void)
{
	int c;

	c = 'a';
	printf("%c\n",toupper(c));
	printf("%c\n",ft_toupper(c));
	return (0);
}
*/
