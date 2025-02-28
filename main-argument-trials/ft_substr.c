/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:50:38 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/05 02:41:42 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (!s)
        return NULL;

    int s_len = 0;
    while (s[s_len] != '\0')
        s_len++;

    if (start >= s_len)
        return NULL;

    if (start + len > s_len)
        len = s_len - start;

    char *sub = malloc(len + 1);
    if (!sub)
        return NULL;

    int i = 0;
    while (i < len)
	{
        sub[i] = s[start + i];
        i++;
    }
    sub[len] = '\0';

    return sub;
}
/*
int main(void) {
    char *str = "It's a string";
    char *ft = ft_substr(str, 7, 6);

    if (ft) {
        printf("Substring: %s\n", ft);
        free(ft);  // Free allocated memory
    }

    return 0;
}
*/