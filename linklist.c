#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head, *newnode;
struct node *temp, *null;

void display()
{
	temp = head;
	while(temp!=null)
	{
		printf("%d\t",temp->data);
		printf("%d\t",temp);
		temp = temp->next;
	}
}
void main()
{
	int x;
	head = null;
	do{
		newnode = malloc(sizeof(struct node));
		printf("Enter data for linklist");
		scanf("%d",&newnode->data);
		newnode->next = null;
		if(head == null)
		{
			head = newnode;
			temp = newnode;
		}else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("to continue enter 1:");
		scanf("%d",&x);
	}while(x==1);
	display();
}
