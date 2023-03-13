#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>


typedef struct s_list
{
	int			content;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	t_list *ptr;
	int size;
}	t_stack ;

typedef struct s_tools
{
	int i;
	int arg;
	char **tab;
	int int_atoi;
	t_list *l_numbers;
	t_stack *stack_a;
	t_stack *stack_b;
} t_tools;


int		string_validator(char *str);
int		ft_atoi(const char *str);
void	list_to_stack(t_stack *stack, t_list *l_numbers);
char	**split_args(char **str);

void	check_double(t_tools *tools);
void	swap_a(t_stack *stack_a);
// void	ft_lstclear(t_list **lst, void (*del)(void*));
// void	ft_lstdelone(t_list *lst, void (*del)(void*));
// void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(int content);
int	ft_lstsize(t_list *lst);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	crush();
int pop(t_stack *head);
void	push(t_stack *stack, int content);
void	rotate_a(t_stack *stack);
void	reverse_rotate_a(t_stack *stack);


void    sorting_list(t_list *l_numbers);
int		bigest(t_stack *stack_a);
int		smallest(t_stack *stack);
void	sort_3(t_stack *stack);
// void	free_arguments(t_tools *tools);
void	sort_5(t_tools *tools);
void	push_to_a(t_stack *stack, int content);
void	push_b(t_tools *tools);
void	push_a(t_tools *tools);
void	rr(t_tools *rools);
void	reverse_rotate_b(t_stack *stack);
void	rrr(t_tools *tools);

#endif