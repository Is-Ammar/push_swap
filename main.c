/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:26:47 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 12:00:19 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

int	main(int argc, char **argv)
{
	t_stack *a = parse_input(argc, argv);
	t_stack *b = NULL;
	t_stack *temp;

	indexing(a);
	if(!sorted(a))
	{
	choose_algo(&a, &b);
	}
 	temp = a;
	while (a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
	printf("stack b ----------->:\n");
	while (b)
	{
		printf("%d\n", b->data);
		b = b->next;
	}
	free_stack(temp);
	return (0);
}
