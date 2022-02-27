/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:26:27 by ytakii            #+#    #+#             */
/*   Updated: 2022/02/25 11:46:27 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	//char line;
	//line[] = "0123456789";
	//printf("%d\n", memset(line+2, '*', 5));

	char str[] ="0123456789";
	int	d = '*';
	int f = 5;
	memset(0, d, f);
	printf("%s\n",str);

	char line[] = "0123456789";
	ft_memset(line+2, d, f);
	printf("%s\n",line);
	return(0);
}
*/
