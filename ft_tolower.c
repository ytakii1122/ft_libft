/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:27:49 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/02 13:19:31 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
	{
		i = c + ('a' - 'A');
		return (i);
	}
	return (c);
}
/*
int main(void)
{
	int c;

	c = 'A';
	printf("%c\n",tolower(c));
	printf("%c\n",ft_tolower(c));
	return (0);
}
*/
