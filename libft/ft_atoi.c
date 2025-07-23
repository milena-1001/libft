/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 00:20:05 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 02:53:26 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *cad)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((cad[i] >= 9 && cad[i] <= 13) || cad[i] == 32)
		i ++;
	if (cad[i] == 45)
		sign = sign *(-1);
	if ((cad[i] == 43) || (cad[i] == 45))
		i ++;
	while (cad[i] >= '0' && cad[i] <= '9')
	{
		num = num * 10 + (cad[i] - '0');
		i ++;
	}
	return (num * sign);
}

// int main()
// {
// 	char cadena[] = "  - 44 7483647";
// 	printf("%i\n", ft_atoi (cadena));
// }
