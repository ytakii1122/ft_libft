/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:29:34 by ytakii            #+#    #+#             */
/*   Updated: 2022/03/01 18:41:10 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strlen(s1);
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	while (i < size && ft_strchr(set, *(s1 + size - 1)))
		size--;
	trim = (char *)malloc(sizeof(char) * (size - i + 1));
	if (trim == NULL)
		return (NULL);
	while (i < size)
	{
		*(trim + j) = *(s1 + i);
		i++;
		j++;
	}
	*(trim + j) = '\0';
	return (trim);
}
/*
int main(void)
{
	char str [] = "aaabbaa";
	char trim = "bbbbbbbbbbbb";
	printf("%s\n", ft_strtrim(str, trim));
	return (0);
}*/
