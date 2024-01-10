/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gevorg <gevorg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:56:54 by gevorg            #+#    #+#             */
/*   Updated: 2024/01/07 17:20:36 by gevorg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

t_container ft_parser(t_list_token *list)
{
	ft_print_list(list->head);
	int 			is_ast;
	t_container 	container;
	t_global_tree	*tree;
	
	is_ast 	= ft_should_ast_created(list);
	if (is_ast)
	{
		tree 	= ft_sematic(list, is_ast);
		container.exec_type = TREE;
		container.tree = tree;
	}
	else
	{
		container.exec_type = LIST;
		container.list = list;
	}
	return (container);
}