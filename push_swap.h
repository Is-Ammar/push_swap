/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:44:04 by iammar            #+#    #+#             */
/*   Updated: 2024/12/26 14:53:40 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int             index;
	struct s_stack	*next;
}					t_stack;

t_stack 			*ft_lst_new(int value);
void 				append_node(t_stack **stack, int value);
t_stack				 *parse_input(int argc, char **argv);
void				sort_two(t_stack **sa);
int					check_sorted(t_stack *sa);
int					ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
void				free_split(char **result, int count);

//moves
void				push_a(t_stack **sa, t_stack **sb);
void				push_b(t_stack **sa, t_stack **sb);
void 				ra(t_stack **a);
void	pa(t_stack **sa, t_stack **sb);
void	pb(t_stack **sa, t_stack **sb);

#endif

