/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:45:53 by ytakii            #+#    #+#             */
/*   Updated: 2022/03/01 18:13:56 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_line;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == '\0')
		return (ft_strdup("\0"));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	new_line = (char *)malloc(sizeof(char) * (len + 1));
	if (new_line == NULL)
		return (NULL);
	while (i < len && s[i + start] != '\0')
	{
		new_line[i] = s[i + start];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

/*
int	main(void)
{
	char *str = "tripouille";
	size_t size = 42000;

	//printf("%s\n", substr(str, 0, size));
	printf("%s\n", ft_substr(str, 0, size));
}
*/
