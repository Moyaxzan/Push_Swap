/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrevert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaint-p <tsaint-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:26:37 by tsaint-p          #+#    #+#             */
/*   Updated: 2023/06/04 21:59:23 by tsaint-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrevert(t_list **stack)
{
	t_list	*tmp;

	if (stack && *stack && (*stack)->next)
	{
		tmp = *stack;
		while ((*stack)->next->next)
			*stack = (*stack)->next;
		(*stack)->next->next = tmp;
		(*stack)->next = tmp;
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = 0x0;
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rrevert(stack_a);
	rrevert(stack_b);
}
