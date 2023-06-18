/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:03:27 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/30 00:00:50 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*istr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	istr = (char *)malloc((len + 1) * sizeof(char));
	if (istr == NULL)
		return (NULL);
	while (i <= len)
	{
		istr[i] = src[i];
		i++;
	}
	return (istr);
}
