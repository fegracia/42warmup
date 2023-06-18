/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:03:27 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/29 22:57:54 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int main(void)
{
	char *src = "Testando a funcao ft_strdup()";
	char *istr = ft_strdup(src);

	if (istr == NULL)
	{
		printf("Erro: Nao foi possivel alocar memoria.\n");
		return 1;
	}
	printf("src: %s\n", src);
	printf("istr: %s\n", istr);
	free(istr);
	return 0;
}
