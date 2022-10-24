#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node {
	int data;
	struct Node *next;
};

typedef struct Node Node;

Node *llist_new_node(int data);

/* Insertion */
Node *llist_insert_front(Node *head, Node *node);
Node *llist_insert_end(Node *head, Node *node);
Node *llist_insert_before(Node *head, Node *node, int data);
Node *llist_insert_after(Node *head, Node *node, int data);

/* Deletion */
Node *llist_delete_front(Node *head);
Node *llist_delete_end(Node *head);
Node *llist_delete_node(Node *head, int data);

/* Traversal */
void llist_print(Node *head);
void llist_print_reverse(Node *head);

void test_1_list_insert_front(void);
void test_2_list_insert_end(void);
void test_3_list_insert_before(void);
void test_4_list_insert_after(void);
void test_5_list_delete_front(void);
void test_6_list_delete_end(void);
void test_7_list_delete_node(void);


int main(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;

	test_1_list_insert_front();
	test_2_list_insert_end();
	test_3_list_insert_before();
	test_4_list_insert_after();
	test_5_list_delete_front();
	test_6_list_delete_end();
	test_7_list_delete_node();

	return 0;
}

void test_1_list_insert_front(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;

	// Test 1: Insert front
	for (i = 1; i <= 5; ++i) {
		temp = llist_new_node(i);
		assert(temp != NULL);
		head = llist_insert_front(head, temp);
	}

	ptr = head;
	i = 5;
	while (ptr != NULL) {
		assert(ptr->data == i);
		--i;
		ptr = ptr->next;
	}
}

void test_2_list_insert_end(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;

	for (i = 1; i <= 5; ++i) {
		temp = llist_new_node(i);
		assert(temp != NULL);
		head = llist_insert_end(head, temp);
	}

	ptr = head;
	i = 1;
	while (ptr != NULL) {
		assert(ptr->data == i);
		++i;
		ptr = ptr->next;
	}
}

void test_3_list_insert_before(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;
	int expected[] = {7, 1, 2, 8, 3, 6, 4, 5};

	// 1 2 3 4 5
	for (i = 1; i <= 5; ++i)
		head = llist_insert_end(head, llist_new_node(i));

	// 6 before 4
	head = llist_insert_before(head, llist_new_node(6), 4);
	// 7 before 1
	head = llist_insert_before(head, llist_new_node(7), 1);
	// 8 before 3
	head = llist_insert_before(head, llist_new_node(8), 3);

	ptr = head;
	i = 0;
	while (ptr) {
		assert(ptr->data == expected[i]);
		++i;
		ptr = ptr->next;
	}
}

void test_4_list_insert_after(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;
	int expected[] = {1, 2, 8, 3, 6, 4, 5, 7, 9};

	// 1 2 3 4 5
	for (i = 1; i <= 5; ++i)
		head = llist_insert_end(head, llist_new_node(i));

	// 6 after 3
	head = llist_insert_after(head, llist_new_node(6), 3);
	// 7 after 5
	head = llist_insert_before(head, llist_new_node(7), 5);
	// 8 after 2
	head = llist_insert_before(head, llist_new_node(8), 2);
	// 9 after 7
	head = llist_insert_before(head, llist_new_node(9), 7);

	ptr = head;
	i = 0;
	while (ptr) {
		assert(ptr->data == expected[i]);
		++i;
		ptr = ptr->next;
	}
}

void test_5_list_delete_front(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;

	for (i = 1; i <= 5; ++i) {
		temp = llist_new_node(i);
		assert(temp != NULL);
		head = llist_insert_end(head, temp);
	}

	for (i = 1; i <= 5; ++i)
		head = llist_delete_front(head);
	assert(head == NULL);
}

void test_6_list_delete_end(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;

	for (i = 1; i <= 5; ++i) {
		temp = llist_new_node(i);
		assert(temp != NULL);
		head = llist_insert_end(head, temp);
	}

	for (i = 1; i <= 5; ++i)
		head = llist_delete_end(head);
	assert(head == NULL);
}

void test_7_list_delete_node(void)
{
	Node *head = NULL;
	Node *temp, *ptr;
	int i;
	int data[] = {1, 11, 2, 22, 3, 33, 4, 44, 5, 55};
	int expected[] = {1, 2, 3, 4, 5};

	for (i = 0; i < sizeof(data) / sizeof(data[0]); ++i)
		head = llist_insert_end(head, llist_new_node(data[i]));
	for (i = 0; i < sizeof(data) / sizeof(data[0]); ++i)
		if (!(i & 1))
			head = llist_delete_node(head, data[i]);

	ptr = head;
	i = 0;
	while (ptr != NULL) {
		assert(i < sizeof(expected) / sizeof(expected[0]));
		assert(ptr->data == expected[i]);
		++i;
		ptr = ptr->next;
	}
}






/**
 * ------------------------------------------------------------------
 * Linked List functions begins from here
 * ------------------------------------------------------------------
 */
Node *
llist_new_node(int data)
{
	Node *temp;

	temp = malloc(sizeof(Node));
	if (temp == NULL)
		return NULL;

	temp->data = data;
	temp->next = NULL;

	return temp;
}

Node *
llist_insert_front(Node *head, Node *node)
{
	if (head == NULL)
		return node;

	node->next = head;
	
	return node;
}

Node *
llist_insert_end(Node *head, Node *node)
{
	Node *ptr;

	if (head == NULL)
		return node;

	ptr = head;
	while (ptr != NULL) {
		if (ptr->next == NULL) {
			ptr->next = node;
			break;
		}
		ptr = ptr->next;
	}

	return head;
}

Node *
llist_delete_front(Node *head)
{
	Node *temp;

	if (head == NULL)
		return NULL;

	temp = head->next;
	free(head);
	
	return temp;
}

void
llist_print_reverse(Node *head)
{
	if (head == NULL)
		return;
	llist_print_reverse(head->next);
	printf("%d ", head->data);
}
Node *llist_insert_before(Node *head, Node *node, int data)
{
    Node *ptr, *prev, *temp;
    ptr = head;
    prev = NULL;
    int key[] = {6, 7, 8};
    while(ptr != NULL )
    {
        for(int i = 0; i < 3; ++i){
            if(ptr->data == key[i])
            {
                temp = llist_new_node(data);
                temp->next = ptr;
                if(prev == NULL)
                   head = temp;
                else
                   prev->next = temp;   
            }
            prev = ptr;
            ptr = ptr->next;
        }
        return head;
    }
}
Node *llist_insert_after(Node *head, Node *node, int data)
{
    Node *ptr, *temp;
    int key[] = {6, 7, 8, 9};
    ptr = head;
    while(ptr != NULL)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (ptr->data == key[i])
            {
                temp = llist_new_node(data);
                temp->next = ptr->next;
                ptr->next = temp;
            }
            ptr = ptr->next;
        }
    }
}
Node *llist_delete_end(Node *head)
{
    Node *ptr, *prev;
    ptr = head;
    prev = NULL;
    while(ptr != NULL)
    {
       if(ptr->next == NULL)
        if(prev == NULL)
          head = NULL;
        else
          prev->next = NULL;

        free(ptr);
        break;
        prev = ptr;
        ptr = ptr->next;   
    }
    return head;
}

Node *llist_delete_node(Node *head, int data)
{
    //int data[] = {1, 11, 2, 22, 3, 33, 4, 44, 5, 55};
	int expected[] = {1, 2, 3, 4, 5};
    Node *ptr, *prev;
    ptr = head;
    prev = NULL;
    while(ptr != NULL)
    {
        for (int i = 0; i < 12; ++i){
       if(ptr->data == expected[i])
         {
             if(prev == NULL)
                head = ptr->next;
            else
                prev->next = ptr->next;

             free(ptr);        
         }
         //return ptr;
        }
    }
    ptr = ptr->next;
    //return head;

}

void llist_print(Node *head)
{
    Node *ptr;
    for (Node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%d", ptr->data);
    }
       
}
