/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:57:50 by afont             #+#    #+#             */
/*   Updated: 2024/05/17 09:43:02 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (s[i] && i < size - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = 0;
	}
	while (s[i])
		i++;
	return (i);
}

/*
int main()
{
	char d[] = "salut";
    char s[] = "ca va";
    printf("%zu", ft_strlcpy(d, s, -1));
}*/
