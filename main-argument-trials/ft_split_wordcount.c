/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_wordcount.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:35:22 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/12 19:50:05 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_wordcount(char const *s, char c)
{
        int     n_elements;
        int     i;
        int     words;

        n_elements = 0;
        i = 0;
        words = 0;
        while (s[i] != '\0')
        {
                if (s[i] != c && !words)
                {
                        words = 1;
                        n_elements++;
                }
                if (s[i] ==  c && words)
                        words = 0;
                i++;
        }
        return (n_elements);
}

int	main(void)
{
	char	string[] = "count the words as elements, space as delimiter.";
	char	delimiter = 32;
	int	function;

	function = ft_wordcount(string, delimiter);
	printf("%d\n", function);
	return (0);
}
