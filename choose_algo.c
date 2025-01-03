/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:34:44 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 12:02:35 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void choose_algo(t_stack **a, t_stack **b)
{
    int size;
    size = list_length(*a);
    int chunk_count = 5;
    if(size == 2)
    {
        sort_two(a);
    }
    else if(size == 3)
        sort_three(a);
    else
    sort_stack(a, b, size, chunk_count);
}