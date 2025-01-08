/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 09:51:54 by iammar            #+#    #+#             */
/*   Updated: 2025/01/07 21:48:11 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	if (!new)
		return ;
	new->next = *alst;
	*alst = new;
}
