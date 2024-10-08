/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fps_counter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <afont@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:24:02 by afont             #+#    #+#             */
/*   Updated: 2024/08/05 14:47:27 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	ft_display_fps1(t_data *data, char *fps)
{
	if (fps[0] == '0')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.zero.img_ptr, 6, 6);
	else if (fps[0] == '1')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.one.img_ptr, 6, 6);
	else if (fps[0] == '2')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.two.img_ptr, 6, 6);
	else if (fps[0] == '3')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.three.img_ptr, 6, 6);
	else if (fps[0] == '4')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.four.img_ptr, 6, 6);
	ft_display_fps4(data, fps);
}

void	ft_display_fps2(t_data *data, char *fps)
{
	if (fps[1] == '0')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.zero.img_ptr, 22, 6);
	else if (fps[1] == '1')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.one.img_ptr, 22, 6);
	else if (fps[1] == '2')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.two.img_ptr, 22, 6);
	else if (fps[1] == '3')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.three.img_ptr, 22, 6);
	else if (fps[1] == '4')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.four.img_ptr, 22, 6);
	ft_display_fps5(data, fps);
}

void	ft_display_fps3(t_data *data, char *fps)
{
	if (fps[2] == '0')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.zero.img_ptr, 38, 6);
	else if (fps[2] == '1')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.one.img_ptr, 38, 6);
	else if (fps[2] == '2')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.two.img_ptr, 38, 6);
	else if (fps[2] == '3')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.three.img_ptr, 38, 6);
	else if (fps[2] == '4')
		mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->all_img.four.img_ptr, 38, 6);
	ft_display_fps6(data, fps);
}

void	ft_fps_counter(t_data *data, int flag)
{
	static double	diff;
	static char		*fps;

	if (flag && fps)
	{
		free(fps);
		return ;
	}
	diff += data->elapsed_time;
	if (diff >= 1000)
	{
		if (fps)
			free(fps);
		fps = ft_itoa((int)(1000.0 / data->elapsed_time));
		diff = 0;
	}
	if (fps)
	{
		if (ft_strlen(fps) >= 1)
			ft_display_fps1(data, fps);
		if (ft_strlen(fps) >= 2)
			ft_display_fps2(data, fps);
		if (ft_strlen(fps) >= 3)
			ft_display_fps3(data, fps);
	}
}
