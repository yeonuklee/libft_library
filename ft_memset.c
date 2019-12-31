/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:09:46 by yelee             #+#    #+#             */
/*   Updated: 2019/12/31 14:57:19 by yelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	size_t			i;
	char			*nstr;

	i = 0;
	nstr = (char*)str;
	while (i < n)
	{
		nstr[i] = x;
		++i;
	}
	return (nstr);
}