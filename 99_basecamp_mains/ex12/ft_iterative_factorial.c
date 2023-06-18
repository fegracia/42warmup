/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:39:31 by fgracia           #+#    #+#             */
/*   Updated: 2023/04/29 16:29:58 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int result;
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

int	main(void)
{
    int	numb;
    int	result;

    // teste com numb = 0
    numb = 0;
    result = ft_iterative_factorial(numb);
    printf("%d! = %d\n", numb, result);

    // teste com numb = 5
    numb = 5;
    result = ft_iterative_factorial(numb);
    printf("%d! = %d\n", numb, result);

	// teste com numb = 7
    numb = 7;
    result = ft_iterative_factorial(numb);
    printf("%d! = %d\n", numb, result);

    // teste com numb = -3
    numb = -3;
    result = ft_iterative_factorial(numb);
    printf("%d! = %d\n", numb, result);

    return (0);
}
