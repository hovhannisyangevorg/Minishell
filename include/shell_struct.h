/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_struct.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gevorg <gevorg@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:57:11 by gehovhan          #+#    #+#             */
/*   Updated: 2023/09/19 15:57:51 by gevorg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHELL_STRUCT_H
# define SHELL_STRUCT_H

// is a main structure
typedef struct s_main		t_main;
typedef int (*command_t)(char **args, char **env);

struct function_cmd
{
	char *cmd;
	command_t func;
};

function_cmd table[6];

struct s_main
{
	
};

 
#endif