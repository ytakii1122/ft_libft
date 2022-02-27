/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_striteri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:33:17 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/24 13:54:00 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f (i, s + i);
		i++;
	}
}
/*
void iter(unsigned int i, char * s)
{
	*s += i;
}

int	main(void)
{
	char s[] = "1111111111";
	ft_striteri(s, iter);
	return (0);
}*/
