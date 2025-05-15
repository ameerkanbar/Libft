/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknbar <mknbar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:30:00 by mknbar            #+#    #+#             */
/*   Updated: 2025/01/03 21:22:43 by mknbar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	str_len;
	size_t	sub_len;
	size_t	i;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start > str_len)
		return (ft_strdup(""));
	sub_len = str_len - start;
	if (sub_len > len)
		sub_len = len;
	sub = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
