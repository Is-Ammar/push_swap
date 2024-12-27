/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:33:51 by iammar            #+#    #+#             */
/*   Updated: 2024/12/27 14:34:14 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_ab(t_stack **sa, t_stack **sb)
{
	rotate(sa);
	rotate(sb);
	write(1, "rr\n", 3);
}