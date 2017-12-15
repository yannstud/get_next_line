/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysalaun <ysalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 04:31:31 by ysalaun           #+#    #+#             */
/*   Updated: 2017/12/01 21:53:30 by ysalaun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# define BUFF_SIZE 10

typedef struct			s_str
{
	char				*buffer;
	char				*tmp;
}						t_str;
typedef struct			s_gnl
{
	int					ret;
	char				*str;
	int					i;
}						t_gnl;
int						get_next_line(const int fd, char **line);

#endif
