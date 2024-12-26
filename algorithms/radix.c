/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 09:48:32 by iammar            #+#    #+#             */
/*   Updated: 2024/12/26 14:47:18 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int list_length(t_stack *stack)
{
    int length = 0;
    while (stack)
    {
        length++;
        stack = stack->next;
    }
    return length;
}

void radix_sort(t_stack **a, t_stack **b)
{
    int max_bits;
    int i, j, size;
    t_stack *current;

    size = list_length(*a);
    max_bits = 0;
    while ((size - 1) >> max_bits)
        max_bits++;

    for (i = 0; i < max_bits; i++)
    {
        for (j = 0; j < size; j++)
        {
            current = *a;
            if (((current->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
        }
        while (*b)
            pa(a, b);
    }
}
