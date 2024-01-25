#ifndef EXECUTOR_H
# define EXECUTOR_H

# include 	"shell.h"


void ft_executor(t_hash_table *table, t_container cont);




// ft_casts.c
t_function_entity	*ft_entity_to_function(t_hash_entity *hash);
t_env_entity		*ft_entity_to_env(t_hash_entity *hash);
t_hash_entity		*ft_function_to_entity(t_function_entity *func);
t_hash_entity		*ft_env_to_entity(t_env_entity *env);

// ft_hash_table.c
t_hash_table		*ft_init_hash_table(size_t initialCapacity, t_hash_type type);
void				ft_init_entity_list(t_hash_entity_list *list);
void				ft_init_entity_list2(t_hash_entity_list *lhs, t_hash_entity_list *rhs);
size_t				ft_hash_entity(size_t capacity, char *key);
t_function_entity	*ft_create_function_entity(char *key, void *data);
t_env_entity		*ft_create_env_entity(char *key, void *data);
void				ft_push_entity(t_hash_entity_list *lst, char *key, void *data, t_hash_type type);
void				ft_resize_entity(t_hash_table *table, size_t new_capacity);
void				ft_insert_entity(t_hash_table *table, char *key, void *data);
t_function_callback	ft_get_function(t_hash_table *table, char *key);
char				*ft_get_env(t_hash_table *table, char *key);
void				print_env(t_hash_table *env);
t_hash_table		*ft_create_env(char **env);

void				ft_init_arrey(t_vector *tab, size_t size);
void				ft_push_arrey(t_vector *tab, int val);
int					ft_isquot(const char *exit_key);

t_vector			ft_open_pipe_fd(size_t pipe_count);
void				ft_assign_pipe_fd(t_ast_node *tree, t_vector *pipe_fd);
#endif