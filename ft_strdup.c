/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:52:03 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/22 12:27:54 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	while (s1[j] != '\0' && j < i + 1)
	{
		a[j] = s1[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
/*
int main(void)
{
	char *str;
	char *tmp = "I malloc so I am.";

	str = ft_strdup(tmp);
	printf ("%s\n",ft_strdup(str));
}
*/
