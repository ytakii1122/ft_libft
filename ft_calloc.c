/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytakii </var/mail/ytakii>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:05:28 by ytakii            #+#    #+#             */
/*   Updated: 2022/03/01 18:22:03 by ytakii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*a;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	a = malloc(count * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}

/*int main(void)
  {
  long *buffer;
  buffer = (long *)calloc( 40, sizeof( long ) );
  printf("%d\n",buffer);
  if( buffer != NULL )
  free( buffer );
  }
  */
