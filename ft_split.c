/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:30:20 by ytakii            #+#    #+#             */
/*   Updated: 2022/03/01 18:10:26 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cut_count(const char *s, char c)
{
	size_t	i;
	size_t	cut;

	i = 0;
	cut = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cut++;
		i++;
	}
	return (cut);
}

char	*get_words(const char *s, char c, size_t	*j)
{
	char	*words1;
	size_t	len;

	len = 0;
	while (s[*j] == c && s[*j] != '\0')
		(*j)++;
	while (s[*j] != '\0' && s[*j] != c)
	{
		(*j)++;
		len++;
	}
	words1 = (char *)malloc(sizeof(char) * (len + 1));
	if (words1 == NULL)
		return (NULL);
	ft_strlcpy (words1, &s[*j - len], len + 1);
	return (words1);
}

void	ft_free(char **words, size_t	i)
{
	size_t	z;

	z = 0;
	while (z <= i)
	{
		free(words[i]);
		z++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	size_t	cut_count;
	size_t	i;
	size_t	j;
	char	**words;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	cut_count = ft_cut_count(s, c);
	words = (char **)malloc(sizeof(char *) * (cut_count + 1));
	if (words == NULL)
		return (NULL);
	while (i < cut_count)
	{
		words[i] = get_words(s, c, &j);
		if (words[i] == NULL)
		{
			ft_free(words, i);
			return (0);
		}
		i++;
	}
	words[i] = NULL;
	return (words);
}

/*
int	main(void)
{
	//char	*s = "split  ||this|for|me||\0|||!";
	//char    *s = "||AAbb|bb|BB|||||bC||||";
	//char    *s = argv[argc - 1];
	//char	*s = "";
	//char	*s = "\0aa\0bbb";
	//char	*s = "AxBxCCCxDDDDxEExxxF";
	char	*s = "--1-2--3---4----5-----42";
	//char	*s = "  tripouille  42  ";
	//char	*s = " Tripouille ";
	//char	*s = "1111ee";
	char    c = '-';
	char	**spt = ft_split(s, c);
	size_t	i;

	i = 0;
	//system("leaks a.out");
	printf("s=%s\nc=%c\n\n", s, c);
	while (*(spt + i))
	{
		printf("%s\n", *(spt + i));
		i++;
	}
	//free(spt);
	//printf("%zu\n", ft_cut_count(s, c));
}*/
