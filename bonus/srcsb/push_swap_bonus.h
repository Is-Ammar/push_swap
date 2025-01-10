/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:23:09 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 15:12:27 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_lst_new_b(int value);
void				append_node_b(t_stack **stack, int value);
t_stack				*parse_input_b(int argc, char **argv);
double				ft_atoi_b(const char *str);
char				**ft_split_b(char const *s, char c);
void				free_split_b(char **result);
int					list_length_b(t_stack *stack);
void				ft_lstadd_front_b(t_stack **alst, t_stack *nov);
char				**ft_join_args_b(char **argv);
char				*ft_strdup_b(const char *s1);
char				*ft_strjoin_b(char *s1, char *s2);
int					ft_strlen_b(char *str);
int					is_duplicate_b(t_stack *a);
int					sorted_b(t_stack *a);
void				valid_b(int *arr, int i, t_stack *a);
void				free_stack_b(t_stack *stack);
int					is_digit_string_b(const char *str);
int					list_length(t_stack *stack);

void				ra_b(t_stack **a);
void				pa_b(t_stack **sa, t_stack **sb);
void				pb_b(t_stack **sa, t_stack **sb);
void				rra_b(t_stack **sa);
void				sb_b(t_stack **sb);
void				sa_b(t_stack **a);
void				rb_b(t_stack **b);
void				ss_b(t_stack **a, t_stack **b);
void				rrr_b(t_stack **a, t_stack **b);
void				rrb_b(t_stack **sa);
void				rr_b(t_stack **sa, t_stack **sb);

char				*get_next_line(int fd);
int					ft_strcmp_b(char *s1, char *s2);

#endif
