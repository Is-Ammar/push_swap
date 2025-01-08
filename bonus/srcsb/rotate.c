/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:47:59 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:05:46 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra_b(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	last = *a;
	while (last->next)
		last = last->next;
	*a = first->next;
	first->next = NULL;
	last->next = first;
}

void	rb_b(t_stack **b)
{
	t_stack	*temp;
	t_stack	*last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
}
