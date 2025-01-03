/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:32 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 11:43:34 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void reindex_stack(t_stack *stack) 
{
    int index = 0;
    while (stack) {
        stack->index = index++;
        stack = stack->next;
    }
}
void	pa(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;

	tmp = *sb;
	*sb = (*sb)->next;
	tmp->next = *sa;
	*sa = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **sa, t_stack **sb)
{
	t_stack *tmp;

	tmp = *sa;
	*sa = (*sa)->next;
	tmp->next = *sb;
	*sb = tmp;
	write(1, "pb\n", 3);
	indexing(*sa);
}