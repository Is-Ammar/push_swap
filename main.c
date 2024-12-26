/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:26:47 by iammar            #+#    #+#             */
/*   Updated: 2024/12/26 14:37:30 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack *stack) {
    t_stack *temp;
    while (stack) {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}

int main(int argc, char **argv) {
    t_stack *a = parse_input(argc, argv);

    t_stack *temp = a;

    while (a) {
        printf("%d\n", a->data);
        a = a->next;
    }








    free_stack(temp);//????
    return 0;
}