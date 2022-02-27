/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:42:37 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:07:22 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

/*
int main(void)
{
	char buf1[] = "\0abc\0de";
	char buf2[] = "\0abkdef";
	char buf3[] = "\0abcdef";

	printf("%d\n", memcmp(buf1, buf2, 7));
	printf("%d\n", memcmp(buf2, buf3, 7));
	
	printf("%d\n", ft_memcmp(buf1, buf2, 7));
	printf("%d\n", ft_memcmp(buf2, buf3, 7));
	return (0);
}
*/
