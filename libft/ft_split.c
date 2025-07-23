/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milferna <milferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:55:05 by milferna          #+#    #+#             */
/*   Updated: 2025/03/07 03:32:30 by milferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] != '\0' && s[i] == c)
			i ++;
		if (s[i])
			word_count ++;
		while (s[i] && s[i] != c)
			i ++;
	}
	return (word_count);
}

static void	free_mem(char **out, size_t ai)
{
	while (ai)
	{
		ai--;
		free(out[ai]);
	}
	free(out);
}

static void	inicialization(size_t *i, size_t *j, size_t *ai)
{
	*i = 0;
	*j = 0;
	*ai = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	ai;
	char	**out;

	inicialization(&i, &j, &ai);
	out = (char **)ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i ++;
		j = i;
		while (s[i] && (s[i] != c))
			i ++;
		if (i > j)
		{
			out[ai] = ft_substr(s, j, i - j);
			if (!out[ai])
				return (free_mem(out, ai), NULL);
			ai ++;
		}
	}
	return (out);
}

// int main(int argc, char **argv)
// {
//  	char **split_arr;
//  	int	i;

// 	if (argc == 1)
// 		return (0);
//  //	printf("%d - {%c}\n", argv[2][0], argv[2][0]);
//  	split_arr = ft_split(argv[1], argv[2][0]);
//  	i = 0;
// 	printf("\n\"%s\"  |  \'%c\'\n\nft_split:\n\n", argv[1], argv[2][0] );
//  	while (split_arr[i])
//  	{
//  		printf("%d - [%s]\n", i, split_arr[i]);
//  		i++;
//  	}
// 	printf("\n");
//  	i = 0;
//  	while (split_arr[i])
//  	{
//  		free(split_arr[i]);
//  		i++;
//  	}
//  	free(split_arr);
//  	return (0);
// }
// int main()
// {
// 	char *cad = "ccholacadioscbuecc";
// 	char c = ' ';
// 	char	**res = ft_split(cad, c);
// 	int	i = 0;
// 	if (res)
// 	{
// 		while (res[i])
// 		{
// 			printf("Substring %d is: %s\n", i, res[i]);
// 			free(res[i]);
// 			i ++;
// 		}
// 		free(res);
// 	}
// 	return 0;
// }
