/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:00:23 by afont             #+#    #+#             */
/*   Updated: 2024/08/09 15:24:54 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_exit_map(t_data *data, char *str)
{
	int	i;

	if (data->all_img.north_wall.path)
		free(data->all_img.north_wall.path);
	if (data->all_img.south_wall.path)
		free(data->all_img.south_wall.path);
	if (data->all_img.west_wall.path)
		free(data->all_img.west_wall.path);
	if (data->all_img.east_wall.path)
		free(data->all_img.east_wall.path);
	i = -1;
	while (data->map.tab_map && data->map.tab_map[++i])
		free(data->map.tab_map[i]);
	if (data->map.tab_map)
		free(data->map.tab_map);
	if (data->ray_data)
		free(data->ray_data);
	if (data)
		free(data);
	printf("%s", str);
	exit(0);
}

void	ft_exit_before(t_data *data, char *str)
{
	int	i;

	if (data->all_img.north_wall.path)
		free(data->all_img.north_wall.path);
	if (data->all_img.south_wall.path)
		free(data->all_img.south_wall.path);
	if (data->all_img.west_wall.path)
		free(data->all_img.west_wall.path);
	if (data->all_img.east_wall.path)
		free(data->all_img.east_wall.path);
	i = -1;
	while (data->map.tab_map && data->map.tab_map[++i])
		free(data->map.tab_map[i]);
	if (data->map.tab_map)
		free(data->map.tab_map);
	if (data->ray_data)
		free(data->ray_data);
	if (data)
		free(data);
	printf("%s", str);
	exit(0);
}

void	ft_free_color(t_data *data)
{
	ft_free_tab(data->to_free.tab_path);
	ft_free_tab(data->to_free.tab);
	ft_end_gnl(data->to_free.fd);
	free(data->to_free.line);
}
