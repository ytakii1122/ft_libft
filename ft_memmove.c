/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 21:55:46 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/27 16:09:53 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
}
/*
int main(void)
{
	char str[] = "this is a good nyancat !\r\n";
	char dst[0xF0];
	int size = ft_strlen(str);
	printf("befor: %s\n",dst);
	printf("%s\n",memmove(dst, str, size));
	printf("after: %s\n",dst);

	char str1[] = "this is a good nyancat !\r\n";
	char dst1[0xF0];
	int size1 = strlen(str1);
	printf("befor: %s\n",dst1);
	printf("%s\n",ft_memmove(dst1, str1, size));
	printf("after: %s\n",dst1);
	return (0);
}
*/
