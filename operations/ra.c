/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:47:59 by iammar            #+#    #+#             */
/*   Updated: 2024/12/26 14:54:34 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack **a)
{
    if (!*a || !(*a)->next)
        return;

    t_stack *first = *a;
    t_stack *last = *a;

    while (last->next)
        last = last->next;

    *a = first->next;
    first->next = NULL;
    last->next = first;
}