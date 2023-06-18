/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:45:15 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/29 20:47:40 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
int main()
{
    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str);

    int tamanho = ft_strlen(str);

    printf("O tamanho da string \"%s\" é %d.\n", str, tamanho);

    return 0;
}
