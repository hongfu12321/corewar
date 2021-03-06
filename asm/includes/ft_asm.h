/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacques <mjacques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:14:59 by mjacques          #+#    #+#             */
/*   Updated: 2019/04/12 14:31:26 by mjacques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ASM_H
# define FT_ASM_H

# include "op.h"
# include "ft_struct.h"
# include "libft.h"

# include <fcntl.h>

void	ft_putcharsize_fd(uint32_t x, int fd, size_t size);
char	*ft_corextension(char *str);
int		ft_isspace(char c);

/*
** ft_file_maker.c
*/
int		addindex(t_label *list, int index);
int		fillheader(char *line, char *str, int size);
void	fillsize(t_label *list, t_header *head);
void	fillthefile(t_label *list, t_header head, int nfile);
void	addtofile(int openfile, char *namefile);

/*
** ft_file_struct.c
*/
t_line	*structlineinit(char *str);
t_label	*structlabelinit(char *str);
void	ft_addline(char *str, int position, t_label *element);
int		ft_addlabel(char *str, char **element);
void	makestruct(char *str, t_label *list, int nbr);

/*
** ft_line_size.c
*/
void	chekline(t_label *list);
int		get_index(char *line, t_op *op);
void	copy_g_op(t_op *op, t_op tab);

/*
** ft_print_op.c
*/
char	*ft_checklabel(char *label);
int		print_line(t_line *line, t_label *label, int file, int index);
void	get_print_type(t_line *line, t_label *label, int file, int index);
void	print_op(t_label *list, int file);
void	structfree(t_label *list);

/*
** ft_print_op_helper.c
*/
int		find_label_index(t_label *list, char *str);
void	print_arg_type(int *arg_type, int file);
char	*print_reg(char *line, int size, int file);
char	*print_dir(t_line *tline, t_label *label, int file, int index);
char	*print_ind(t_line *tline, t_label *label, int file, int index);

/*
** ft_error.c
*/
void	check_parameter(int i, char **line);
void	ft_checkline(char **line);
int		ft_command_line(char *str);
void	ft_printstruct(t_label *label);

#endif
