/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:45:48 by afont             #+#    #+#             */
/*   Updated: 2024/05/17 09:42:31 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)b;
	while (len--)
		t[i++] = c;
	return (t);
}
/*
int main()
{
	char str[50] = "salut ca va";
	printf("%s\n", ft_memset(str, 'K', 5));
	printf("%s", memset(str, 'J', 5));
}*/
