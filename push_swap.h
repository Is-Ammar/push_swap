/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:44:04 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 13:19:06 by iammar           ###   ########.fr       */
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
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack				*ft_lst_new(int value);
void				append_node(t_stack **stack, int value);
t_stack				*parse_input(int argc, char **argv);
void				sort_two(t_stack **sa);
int					sorted(t_stack *sa);
double				ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
void				free_split(char **result);
int					list_length(t_stack *stack);
void				ft_lstadd_front(t_stack **alst, t_stack *new);
char				**ft_join_args(char **argv);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char *s1, char *s2);
int					ft_strlen(char *str);
int					is_duplicate(int *arr, int len);
int					sorted(t_stack *a);
void				valid(int *arr, int i, t_stack *a);

// moves
void				ra(t_stack **a);
void				pa(t_stack **sa, t_stack **sb);
void				pb(t_stack **sa, t_stack **sb);
void				rra(t_stack **sa);
void				sb(t_stack **sb);
void				sa(t_stack **a);
void				rb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rrb(t_stack **sa);
void				rr(t_stack **sa, t_stack **sb);
void				ss(t_stack **a, t_stack **b);

// operation
void				choose_algo(t_stack **a, t_stack **b, char **argv);
void				sort_three(t_stack **a);
void				sort(t_stack **sa, t_stack **sb, int len);
int					find_max_index(t_stack *sb, int max_val);
void				slide(int *start, int *end, int tab_size);
int					get_max(t_stack *stack);
int					*sort_tab(int *tab, int len);
int					is_duplicate(int *arr, int len);
int					is_digit_string(const char *str);
void				free_stack(t_stack *stack);
void				sort_four(t_stack **sa, t_stack **sb);
void				sort_five(t_stack **sa, t_stack **sb);
int					get_min(t_stack *stack);
//  bonus
char				*get_next_line(int fd);
int					ft_strcmp(char *s1, char *s2);
#endif
