/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 11:44:04 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 14:20:53 by iammar           ###   ########.fr       */
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
long long			ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
void				free_split(char **result, int count);
int 				list_length(t_stack *stack);
void				ft_lstadd_front(t_stack **alst, t_stack *new);
int 				max(t_stack *a);

// moves
void				ra(t_stack **a);
void				pa(t_stack **sa, t_stack **sb);
void				pb(t_stack **sa, t_stack **sb);
void				rra(t_stack **sa);
void				sb(t_stack **sb);
void				sa(t_stack **a);
void 				rb(t_stack **b);
void 				ss(t_stack **a, t_stack **b);
void 				rrr(t_stack **a, t_stack **b);
void				rrb(t_stack **sa);
void				rr(t_stack **sa, t_stack **sb);

//operation
void				rotate(t_stack **sb);
void 				sort_stack(t_stack **a, t_stack **b, int size, int chunk_count);
void 				indexing(t_stack *stack);
void 				choose_algo(t_stack **a, t_stack **b);
void 				sort_three(t_stack **a);
int					sorted(t_stack *sa);

#endif
