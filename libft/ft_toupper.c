/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:32:50 by milferna          #+#    #+#             */
/*   Updated: 2025/02/12 22:40:05 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int caracter)
{
	if (caracter >= 97 && caracter <= 122)
		caracter = caracter - 32;
	return (caracter);
}
