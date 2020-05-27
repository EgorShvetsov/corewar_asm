/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_comment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dorphan <dorphan@student.21-school.ru      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:49:41 by dorphan           #+#    #+#             */
/*   Updated: 2020/05/27 17:49:44 by dorphan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int			is_comment(t_data *data, char *line)
{
	int		i;

	i = data->char_num + 1;
	while (line[i])
		i++;
	data->char_num = i;
	return (1);
}
