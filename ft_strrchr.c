/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:18:00 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:11:27 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	*last_str;

	i = 0;
	str = (char *)s;
	last_str = NULL;
	if (c == '\0')
		return (&((char *)str)[ft_strlen(s)]);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			last_str = &str[i];
		i++;
	}
	return (last_str);
}
/*
int main(void)
{
   char *src = "\0";
   char *d1 = strrchr(src, 'a');
   char *d2 = ft_strrchr(src, 'a');

   printf("%s\n", d1);
   printf("%s\n", d2);
   return (0);
} 
*/
