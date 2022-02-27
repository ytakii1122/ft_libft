/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:58:19 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:13:41 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[0xF00];
	char	src[] = "Hello !";
	char    dst1[0xF00];
	char    src1[] = "Hello !";

	printf("%zu\n", strlcpy(dst, src, 2));
	printf("%zu\n", ft_strlcpy(dst1, src1 , 2));
	printf("%s\n", dst);
	printf("%s\n",dst1);
}
*/
