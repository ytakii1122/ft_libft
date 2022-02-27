/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:00:24 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:17:50 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
   int main(void)
   {
   char	a[] = "999999999";
   printf("%s\n", bzero(a, 3));
   printf("%s\n",a);

   char	b[] = "999999999";
   printf("%s\n",ft_bzero(b, 3));
   return (0);
   }
   */
