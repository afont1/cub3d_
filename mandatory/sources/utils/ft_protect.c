/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:16:54 by afont             #+#    #+#             */
/*   Updated: 2024/08/10 10:28:24 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_protect_malloc(void *ptr)
{
	if (!ptr)
	{
		perror("Erorr malloc");
		exit(EXIT_FAILURE);
	}
}

void	ft_protect_img(t_data *data, void *img_ptr)
{
	int	i;

	if (!img_ptr)
	{
		free(data->all_img.north_wall.path);
		free(data->all_img.south_wall.path);
		free(data->all_img.west_wall.path);
		free(data->all_img.east_wall.path);
		ft_destroy_img(data);
		i = -1;
		while (data->map.tab_map && data->map.tab_map[++i])
			free(data->map.tab_map[i]);
		free(data->map.tab_map);
		free(data->ray_data);
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		mlx_destroy_display(data->mlx_ptr);
		free(data->mlx_ptr);
		free(data);
		perror("Error img allocation");
		exit(EXIT_FAILURE);
	}
}
