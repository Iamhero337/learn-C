#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int llist_add(struct node *head);

int main(void)
{
	struct node *head, *temp;
	int data;
	int ans;
	
	head = NULL;
	
	printf("Data: ");
	scanf("%d", &data);
	
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	head = temp;
	
	printf("Data: ");
	scanf("%d", &data);
	
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	head->next = temp;
	
	printf("Data: ");
	scanf("%d", &data);
	
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	head->next->next = temp;
	
	printf("Data: ");
	scanf("%d", &data);
	
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	head->next->next->next = temp;
	
	printf("Data: ");
	scanf("%d", &data);
	
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	head->next->next->next->next = temp;
	
	ans = llist_add(head);
	printf("Sum = %d\n", ans);
	
	return 0;
}


int llist_add(struct node *head)
{
	int sum = 0;
	struct node *ptr;
	ptr = head;
	while(ptr != NULL){
		sum = sum + ptr->data;
		ptr = ptr->next;
	}
	return sum;
}
		
	
	
