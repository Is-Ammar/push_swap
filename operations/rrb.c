/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:57:42 by iammar            #+#    #+#             */
/*   Updated: 2025/01/07 21:46:16 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack **sa)
{
	t_stack	*tmp;

	tmp = *sa;
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front(sa, tmp->next);
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}
