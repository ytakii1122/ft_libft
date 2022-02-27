/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:39:35 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 12:37:54 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
		{
			return (&d[i]);
		}
		i++;
	}
	return (NULL);
}
/*
   int main(void)
   {
   char str[] = "abcdef\0ghij";
   char *p;

   p = (char *)memchr(str, 'g', 10);
   printf("%s\n", p);

   char str1[] = "abcdef\0ghij";
   char	*q;

   q = ft_memchr(str1, 'g', 10);
   printf("%s\n", q);
   return (0);
   }
   */
