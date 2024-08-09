/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:16:23 by afont             #+#    #+#             */
/*   Updated: 2024/08/09 15:23:53 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_check_tab_color(t_data *data, char **tab)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	if (ft_tablen(tab) != 3 || tab[2][0] == '\n')
		flag = 1;
	i = -1;
	while (tab[++i])
		if (ft_strlen(tab[i]) > 4)
			flag = 1;
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			if (ft_isdigit(tab[i][j]) == 0 && tab[i][j] != '\n')
				flag = 1;
	}
	if (flag)
	{
		ft_free_color(data);
		ft_exit_before(data, "Error color len\n");
	}
}
