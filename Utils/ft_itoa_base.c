/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:17:13 by lumedeir          #+#    #+#             */
/*   Updated: 2023/06/14 16:56:26 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itoa_base(size_t n, char *base)
{
	char	*arr;
	size_t	base_size;
	size_t	num_size;
	size_t	num;

	num = n;
	num_size = 1;
	base_size = ft_strlen(base);
	while (n >= base_size)
	{
		n /= base_size;
		num_size++;
	}
	arr = ft_calloc((num_size + 1), sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (num_size--)
	{
		arr[num_size] = base[num % base_size];
		num /= base_size;
	}
	return (arr);
}
