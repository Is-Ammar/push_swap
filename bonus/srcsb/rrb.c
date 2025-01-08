/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:57:42 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:05:53 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrb_b(t_stack **sa)
{
	t_stack	*tmp;

	tmp = *sa;
	while (tmp->next->next)
		tmp = tmp->next;
	ft_lstadd_front_b(sa, tmp->next);
	tmp->next = NULL;
}
