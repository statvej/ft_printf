/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: statvej <statvej@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:09:08 by fstaryk           #+#    #+#             */
/*   Updated: 2022/05/26 12:19:13 by statvej          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	ib;
	size_t	jb;
	size_t	il;
	char	*ret;

	ib = 0;
	if (ft_strlen(little))
	{
		while (big[ib])
		{
			il = 0;
			jb = ib;
			while (big[jb++] == little[il++])
			{
				if (!(little[il]))
					return ((ret = (char *)&big[ib]));
			}
			ib++;
		}
		return (NULL);
	}
	else
		return ((ret = (char *)big));
}
