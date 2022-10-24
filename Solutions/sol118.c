#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


struct node {
	int data;
	struct node *next;
};

struct list {
	struct node *head;
};

void list_init(struct list *list);
void list_cleanup(struct list *list);
void list_insert(struct list *list, int data);
void list_print(struct list *list);
struct node *list_new_node(int data);
void list_free(struct node *node);

struct list list_merge_sorted(struct list *a, struct list *b);


int main(int argc, char **argv)
{
	int n, data;
	struct list list_a, list_b, merged_list;

	list_init(&list_a);
	list_init(&list_b);

	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &data);
		list_insert(&list_a, data);
	}

	for (int i = 0; i < n; ++i) {
		scanf("%d", &data);
		list_insert(&list_b, data);
	}

	merged_list = list_merge_sorted(&list_a, &list_b);

	list_print(&merged_list);

	list_cleanup(&list_a);
	list_cleanup(&list_b);
	list_cleanup(&merged_list);

	return 0;
}

void list_init(struct list *list)
{
	list->head = NULL;
}

void list_insert(struct list *list, int data)
{
	struct node *node = list_new_node(data);

	assert(node != NULL);

	struct node **ptr = &list->head;
	while (*ptr)
		ptr = &(*ptr)->next;

	*ptr = node;
}

void list_print(struct list *list)
{
	for (struct node *node = list->head; node != NULL; node = node->next)
		printf("%d ", node->data);
	puts("");
}

struct node *list_new_node(int data)
{
	struct node *node = malloc(sizeof(struct node));
	
	assert(node != NULL);

	node->data = data;
	node->next = NULL;

	return node;
}


void list_cleanup(struct list *list)
{
	if (list == NULL)
		return;

	list_free(list->head);
}

void list_free(struct node *node)
{
	if (node == NULL)
		return;

	list_free(node->next);
	free(node);
}



struct list list_merge_sorted(struct list *a, struct list *b)
{
	struct node *aptr, *bptr;
	struct list merged_list;

	list_init(&merged_list);

	aptr = a->head;
	bptr = b->head;

	while (aptr && bptr) {
		if (aptr->data <= bptr->data) {
			list_insert(&merged_list, aptr->data);
			aptr = aptr->next;
		} else {
			list_insert(&merged_list, bptr->data);
			bptr = bptr->next;
		}
	}

	while (aptr) {
		list_insert(&merged_list, aptr->data);
		aptr = aptr->next;
	}
	while (bptr) {
		list_insert(&merged_list, bptr->data);
		bptr = bptr->next;
	}

	return merged_list;
}
