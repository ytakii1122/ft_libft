/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:46:18 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 13:11:00 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (needle == haystack || *needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = i;
		k = 0;
		while (haystack[j] != '\0' && haystack[j] == needle[k] && j < len)
		{
			if (needle[k + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
			k++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	//char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	char * empty = (void*)0;

	//char str[] = NULL;
	//char str1[] = "";
	//char size = 0;
	
	//size = ft_strlen(str);
	//printf("%s\n", strnstr(empty, "coucou", 3));

	//char str1[] ="abcdefgh";
	//printf("%s\n",strnstr(str1, "d" ,1));


	//char str2[] = "see FF your FF return FF now FF";
	//char str2[] = "FF";
	//char size2 = 0;
	//size2 = ft_strlen(str);
	//printf("%s\n", strnstr(str2, str2, size2));

	//char str2[] = ;
	//char str3 = "";
	//char size2 = 0;
	
	//size2 = ft_strlen(str2);
	printf("%s\n",ft_strnstr(empty,"couou", 3));
	return (0);

}
*/
