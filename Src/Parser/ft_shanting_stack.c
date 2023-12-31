/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shanting_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gevorg <gevorg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:54:42 by gevorg            #+#    #+#             */
/*   Updated: 2023/12/24 14:33:48 by gevorg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

t_global_stack *ft_init_shant_stack()
{
	t_global_stack *stack = (t_global_stack *)malloc(sizeof(t_global_stack));
	if (stack == NULL)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

int	ft_is_shant_stack_empty(t_global_stack *stack)
{
	return ((stack->top == NULL));
}

t_shant_stack	*ft_push_shant_stack(t_global_stack *stack, t_ast_node *ast_node)
{
	t_shant_stack *new_stack = (t_shant_stack *)malloc(sizeof(t_shant_stack));
	if (new_stack == NULL)
		return (NULL);

	new_stack->ast_node = ast_node;
	new_stack->next = stack->top;
	stack->top = new_stack;
	++stack->size;
	return (new_stack);
}

void	ft_pop_shant_stack(t_global_stack *stack)
{
	if (!stack || !stack->top)
		return ;
 	t_shant_stack *tmp = stack->top;
	stack->top = stack->top->next;
	--stack->size;
	free(tmp);
}

void	ft_free_shant_stack(t_global_stack *stack)
{
	if (!stack || !stack->top)
		return ;
	while (stack->size)
		ft_pop_shant_stack(stack);	
}



