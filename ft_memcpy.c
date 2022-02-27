/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:35:59 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/02 13:34:08 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char buf[] = "ABCDDEFG";
	char buf2[] = "123456789";

	char buf3[] = "ABCDDEFG";
	char buf4[] = "123456789";

	printf("%s\n",memcpy(0,0,3));
	printf("%s\n",ft_memcpy(0, 0,3));
	return (0);
}
*/
