/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 09:50:09 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:05:49 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra_b(t_stack **sa)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*sa || !(*sa)->next)
		return ;
	tmp = *sa;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *sa;
	*sa = tmp;
}
