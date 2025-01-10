/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:32 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 13:38:23 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_b(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;

	if (!sb || !(*sb))
		return ;
	tmp = *sb;
	*sb = (*sb)->next;
	tmp->next = *sa;
	*sa = tmp;
}

void	pb_b(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;

	if (!sa || !(*sa))
		return ;
	tmp = *sa;
	*sa = (*sa)->next;
	tmp->next = *sb;
	*sb = tmp;
}
