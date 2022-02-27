/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:02:45 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:24:34 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	if (dstsize <= len_d)
		return (len_s + dstsize);
	i = 0;
	while (*(src + i) && len_d + i < dstsize - 1)
	{
		*(dst + len_d + i) = *(src + i);
		i++;
	}
	*(dst + len_d + i) = '\0';
	if (len_d < dstsize)
		return (len_d + len_s);
	return (0);
}

/*
int main(void) 
{
	char *dst = "there is no stars in the sky";
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *dst1 = "there is no stars in the sky";
	char *src1 = "the cake is a lie !\0I'm hidden lol\r\n";
	size_t size = 0;
	size_t size1 = 0;
	size_t size2 = 0;

	size = ft_strlen(dst);
	size2= ft_strlen(src);
	size1 = ft_strlen(dst1);

	printf("%lu\n", strlcat(dst, src, size + size2));
	printf("%s\n",dst);
	printf("%zu\n",size+size
*/
