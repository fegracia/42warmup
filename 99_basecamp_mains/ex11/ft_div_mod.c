/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:27:40 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/29 15:38:35 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main(void)
{
	int	a;
	int	b;
	int mod;
	int div;

	a = 5;
	b = 2;
	mod = 0;
	div = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%i dividido por %i eh igual a %i e com resto de %i\n", a, b, div, mod);
	return (0);
}