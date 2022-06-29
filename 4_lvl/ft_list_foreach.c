/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *head, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/



#include <stdlib.h>
#include "ft_list_foreach.h"

void	ft_list_foreach(t_list *head, void (*f)(void *))
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		f(head->data);
		head = head->next;
	}
}

/* -------------------------------------------------------- */

#include <stdio.h>

void	int_doubler(void *n)
{
	int *num = (int *)n;
	*num = *num * 2;
}

int		main(void)
{
	t_list *pt_a = malloc(sizeof(t_list));
	int	n_a = 0;
	pt_a->data = &n_a;
	pt_a->next = 0;

	t_list *pt_b = malloc(sizeof(t_list));
	int	n_b = 3;
	pt_b->data = &n_b;
	pt_b->next = 0;

	t_list *pt_c = malloc(sizeof(t_list));
	int	n_c = 4;
	pt_c->data = &n_c;
	pt_c->next = 0;

	pt_a->next = pt_b;
	pt_b->next = pt_c;

	t_list *cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");

	ft_list_foreach(pt_a, int_doubler);

	cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");
}
