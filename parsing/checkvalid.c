/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:37:33 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 16:46:35 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	valid(int *arr, int i, t_stack *a)
{
	if (is_duplicate(arr, i))
	{
		free_stack(a);
		free(arr);
		write(1, "Error\n", 6);
		exit(1);
	}
	if (sorted(a))
	{
		if (a)
		{
			free_stack(a);
			free(arr);
		}
		exit(1);
	}
}
