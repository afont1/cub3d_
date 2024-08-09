/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:46:35 by afont             #+#    #+#             */
/*   Updated: 2024/08/09 14:53:25 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int	ft_empty_line(char *line)
{
	int	i;

	i = -1;
	while (line[++i])
		if (line[i] != ' ' && line[i] != '\n')
			return (0);
	return (1);
}

int	ft_check_empty(int nbr, char *line)
{
	if (!line)
		return (1);
	if (nbr > 0 && ft_empty_line(line))
	{
		free(line);
		return (1);
	}
	return (0);
}
