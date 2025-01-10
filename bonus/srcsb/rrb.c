/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 20:57:42 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 13:38:33 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rrb_b(t_stack **sb)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*sb || !(*sb)->next)
		return ;
	tmp = *sb;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *sb;
	*sb = tmp;
}
