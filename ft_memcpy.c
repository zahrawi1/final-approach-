/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:40:13 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/24 17:40:44 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	while (n--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}
