/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:28:43 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/27 16:10:39 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*add_s1s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	add_s1s2 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (add_s1s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		add_s1s2[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		add_s1s2[i + j] = s2[j];
		j++;
	}
	add_s1s2[i + j] = '\0';
	return (add_s1s2);
}
/*
int main(void)
{
	char	s1[] = "abcdeffffffffffffffffffffffffffffffffffffffffffff";
	char	s2[] = "1234";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/
