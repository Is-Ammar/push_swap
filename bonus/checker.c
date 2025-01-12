/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:56:53 by iammar            #+#    #+#             */
/*   Updated: 2025/01/12 12:54:03 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcsb/push_swap_bonus.h"

int	is_digit_string_b(const char *str)
{
	if (!str)
	{
		return (0);
	}
	if (*str == '-' || *str == '+')
    {
        str++;
        if (*str < '0' || *str > '9')
        {
            return 0;
        }
    }
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
		}
		else if (*str < '0' || *str > '9')
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}

int	sorted_b(t_stack *a)
{
	t_stack	*current;

	if (a == NULL || a->next == NULL)
	{
		return (1);
	}
	current = a;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

int	ft_freee(t_stack **a, t_stack **b, char *line)
{
	free_stack_b(*a);
	free_stack_b(*b);
	free(line);
	write(2, "Error\n", 6);
	return (1);
}

int	compare(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp_b(line, "sa"))
		sa_b(a);
	else if (!ft_strcmp_b(line, "sb"))
		sb_b(b);
	else if (!ft_strcmp_b(line, "ss"))
		ss_b(a, b);
	else if (!ft_strcmp_b(line, "ra"))
		ra_b(a);
	else if (!ft_strcmp_b(line, "rb"))
		rb_b(b);
	else if (!ft_strcmp_b(line, "rr"))
		rr_b(a, b);
	else if (!ft_strcmp_b(line, "rra"))
		rra_b(a);
	else if (!ft_strcmp_b(line, "rrb"))
		rrb_b(b);
	else if (!ft_strcmp_b(line, "rrr"))
		rrr_b(a, b);
	else if (!ft_strcmp_b(line, "pa"))
		pa_b(a, b);
	else if (!ft_strcmp_b(line, "pb"))
		pb_b(a, b);
	else
		return (ft_freee(a, b, line));
	return (free(line), 0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;
	int		size;

	b = NULL;
	a = parse_input_b(argc, argv);
	size = list_length(a);
	while (1337)
	{
		line = get_next_line(0);
		if (!line || !*line)
		{
			break;
		}
		if (compare(line, &a, &b) == 1)
			exit(1);
	}
	ok_ko(a, size);
	if (b)
		free_stack_b(b);
	free_stack_b(a);
}
