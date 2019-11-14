/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 07:48:20 by lchapren          #+#    #+#             */
/*   Updated: 2019/09/18 23:19:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_param
{
	long int		nb_lines;
	long int		longueur;
	char			empty;
	char			obstacle;
	char			solution;
}					params;

typedef struct		s_resolved
{
	long int		i_deb;
	long int		j_deb;
	long int		i_fin;
	long int		j_fin;
}					resolved;

char				*get_string(void);
char				**get_square(void);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
char				**conv_symbols(char **tab, char vide, char obs);
int					**char_to_int(char **tab);
int					**resolve(int **tab);
resolved			get_coords(int **tab, long int nb_lines, long int longueur);
params				get_params(char *str);
void				affich_result(char **tab, resolved coords, params carac);
long int			lil_atoi(char *str);
char				*ft_strdup(char *str, long int end, long int size);
int					check_exists(char *str, params carac);
int					check_carr_return(char *str, params verif);
int					check_line_len(char **tab);
int					is_double_char(params carac);
int					is_printable(char *str, params carac);

#endif
