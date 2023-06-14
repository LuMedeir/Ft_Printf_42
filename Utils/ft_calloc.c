/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:24:39 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:29 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_bzero(void *s, size_t n)
{
	char	*str2;
	size_t	count;

	str2 = (char *) s;
	count = 0;
	while (n > count)
	{
		str2[count] = 0;
		count++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (totalsize != 0 && totalsize / size != nmemb)
		return (NULL);
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}
