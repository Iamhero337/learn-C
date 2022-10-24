#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define _GRDATA_IMPLEMENTAION_
#include "lib/grdata.h"

typedef struct node_t {
	grdata_t data;
	struct node_t *next;
} node_t;

node_t *list_insert(node_t *head, node_t *node);
node_t *make_node(int data);
node_t *list_shift(node_t *head, int k);
void    list_print(node_t *head);

int main()
{
	node_t *head = NULL;

	head = list_insert(head, make_node(1));
	head = list_insert(head, make_node(2));
	head = list_insert(head, make_node(3));
	head = list_insert(head, make_node(4));
	head = list_insert(head, make_node(5));

	list_print(head);
	puts("");

	int k = 2;
	head = list_shift(head, k);

	list_print(head);
	puts("");


	return 0;
}

node_t *make_node(int data)
{
	node_t *node = calloc(1, sizeof(node_t));

	assert(node);

	node->data = mkidata(data);

	return node;
}

node_t *list_insert(node_t *head, node_t *node)
{
	node_t **ptr = &head;

	while (*ptr)
		ptr = &((*ptr)->next);

	*ptr = node;

	return head;
}

node_t *
list_shift(node_t *head, int k)
{
	int n = 0;
	node_t *ptr = head, *last = NULL, *prev = NULL;

	// Number of nodes in list
	while (ptr) {
		prev = ptr;
		ptr = ptr->next;
		++n;
	}
	last = prev;

	k = k % n;
	if (k == 0)
		return head;

	prev = NULL;
	ptr = head;
	int i = 1;
	while (ptr) {
		if (n - k + 1 == i)
			break;
		prev = ptr;
		ptr = ptr->next;
		++i;
	}

	last->next = head;
	head = ptr;
	prev->next = NULL;

	return head;
}

void
list_print(node_t *head)
{
	if (head == NULL) return;

	datat_print(head->data);
	list_print(head->next);
}
