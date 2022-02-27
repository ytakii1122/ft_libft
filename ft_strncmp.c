/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:35:18 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/01 23:24:57 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && s1[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "\200";
	char	b[] = "\0";
	char	c[] = "\200";
	char	d[] = "\0";

	printf("%d\n", strncmp(a, b, 1));
	printf("%d\n", ft_strncmp(c, d, 1));
	return (0);
}
*/
