/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:03:03 by milferna          #+#    #+#             */
/*   Updated: 2025/02/26 21:32:57 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_string(int n, int negative, int len, char *str)
{
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

static int	find_len(int temp, int len, int n)
{
	while (temp > 0)
	{
		temp = temp / 10;
		len ++;
	}
	if (n == 0)
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		len;
	int		negative;

	negative = 0;
	len = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup ("0"));
	if (n < 0)
	{
		negative = 1;
		n = -n;
		len ++;
	}
	temp = n;
	len = find_len(temp, len, n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str = fill_string(n, negative, len, str);
	str[len] = '\0';
	return (str);
}
// int main()
// {
// 	int num = 0;
// 	printf("%s\n", ft_itoa(num));
// 	return 0;
// }
