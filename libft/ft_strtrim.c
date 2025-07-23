/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:17:00 by milferna          #+#    #+#             */
/*   Updated: 2025/03/01 20:02:33 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	size_t	len;
	char	*strtrim;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end --;
	len = end - start + 1;
	strtrim = ft_calloc (sizeof(char), len);
	if (!strtrim)
		return (NULL);
	ft_strlcpy (strtrim, s1 + start, len);
	return (strtrim);
}

// int	main()
// {
// 	char	*cad1 = "hhhhhhggghola caraccolahgggg";
// 	char	*cad2 = "hgggg";

// 	printf("%s\n", ft_strtrim(cad1, cad2));
// 	return 0;
// }