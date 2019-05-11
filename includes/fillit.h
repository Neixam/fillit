/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:24:28 by anboilea          #+#    #+#             */
/*   Updated: 2019/03/03 13:38:40 by abourenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <stdlib.h>

typedef struct	s_treeminos
{
	char				letter;
	struct s_treeminos	*next;
	struct s_treeminos	*bro;
}				t_tree;

t_tree			*creatreeminos(void);
char			*ft_ultrim(char *str, int j);
char			*ft_cut(char *str);
char			*ft_cut(char *str);
char			*ft_creat_str_index(char **tab);
char			*ft_strtrimc(char *str, char c);
char			*ft_strjoinfree(char *s1, char *s2, int trool);
char			**creatlang(void);
void			ft_print(int *fldgrd);
void			ft_reinit_tab(int *tab);
void			ft_print(int *fldgrd);
void			insert_piece(int *k, char *j, int i, int h);
void			put_usage(void);
void			ft_reinit_resolve(int *square, int tetri);
int				ft_sqrt(int nb);
int				check_file(int fd, char ***tab);
int				*fill_grid(int *grid, int n);
int				pose_piece_2(int *s, char *t, int n, int i);
int				*gen_grid(char **tab);
int				pose_piece_1(int *s, char **t, int i, char *i_tab);
int				put_error(void);
int				pose_piece(int *s, char **t, int in, char *i_tab);
int				ft_max_h(char *str);
int				ft_min_h(char *str);
int				ft_max(char *str);
int				ft_min(char *str);
int				*ft_int_init(int *tab, int size, int val);
int				*ft_int_insert(int *tab, int pos, int val, int size);
int				*ft_fillra(int *ret, int *grid, int size);
int				*ft_int_insert(int *tab, int pos, int val, int size);
int				ft_ilen(int *tab);
int				ft_ilenl(int *square);
int				ft_tabstrlen(char **tab);
int				start_resolve(char **tab);
int				*ft_ra(int *grid);
int				resolve(int *sq, char **t, char *ib, int ief);

#endif
