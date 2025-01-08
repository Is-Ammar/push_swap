/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:32 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:05:33 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_b(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;

	tmp = *sb;
	*sb = (*sb)->next;
	tmp->next = *sa;
	*sa = tmp;
}

void	pb_b(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;

	tmp = *sa;
	*sa = (*sa)->next;
	tmp->next = *sb;
	*sb = tmp;
}
