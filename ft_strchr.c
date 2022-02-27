/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:41:57 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/27 16:08:20 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == (unsigned char) c)
			return ((char *)&s[j]);
		j++;
	}
	if (c == '\0')
		return ((char *)&s[j]);
	return (NULL);
}
/*
   int main(void)
   {

   char str[] = "tripo\0uille";
   char	i;

   i = '\0';
   printf("%s\n",strchr(str, i));
   printf("%s\n",ft_strchr(str, i));
   return (0);
   }
*/
