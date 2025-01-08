/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 09:51:54 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:22:50 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcsb/push_swap_bonus.h"

void	ft_lstadd_front_b(t_stack **alst, t_stack *new)
{
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}
