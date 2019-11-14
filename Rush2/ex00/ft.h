/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:58:35 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/15 21:19:11 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define DICT "numbers.dict"

int		ft_strlen(char *str);
int		same_str(char *str, char *buf);
int		find_line(char *arg, char *dict);
int		find_char(char c, char *dict);
int		verif_arg(int argc, char **argv);
char	*parse_line(int c_count, char *dict);
void	search_patterns(char *number);
char	*extract(char *number, int i);
char	*ft_strdup(char *str);
void	ft_putstr(char *str);
char	*decoupe(char *number, int i);
char	*rev(char *str);
char	*cpy_s();
void	ex_all(char *number, char *dict);

#endif
