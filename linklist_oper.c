#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head, *newnode;
struct node *temp, *prenode;

int count =0;

void insertAtfirst()
{
	newnode = malloc(sizeof(struct node));
	printf("Enter data for newnode : ");
	scanf("%d",&newnode->data);
	if(head == NULL)
	{
		head = newnode;
		newnode->next = NULL;
	}else
	{
		newnode->next= head;
		head = newnode;
	}
	count++;
}

void insertAtlast()
{
	newnode = malloc(sizeof(struct node));
	printf("Enter data for newnode : ");
	scanf("%d",&newnode->data);
	if(head ==NULL)
	{
		head = newnode;
		newnode->next = NULL;
	}else
	{
		temp = head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
	count++;
}

void insertAtposition()
{
	int pos, count1=0;
	printf("enter postion to insert data:");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("You enter wrong position\n");
	}
	else{
		newnode = malloc(sizeof(struct node));
		printf("Enter data for newnode : ");
		scanf("%d",&newnode->data);
		if(head == NULL){
			head = newnode;
			newnode->next = NULL;
			count++;
		}
		else{
		temp = head;
		while(count1<pos-1)
		{
			prenode = temp;
			temp = temp->next;
			count1++;
		}
		prenode->next = newnode;
		newnode->next = temp;
		count++;
		}
	}
}

void deletionAtfirst()
{
	if(head == NULL)
	{
		printf("Empty\n");
	}else
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
		count--;
	}
}

void deletionAtlast()
{
	if(head == NULL)
	{
		printf("Empty\n");
	}else
	{
		temp = head;
		while(temp->next!=NULL)
		{
			prenode = temp;
			temp = temp->next;
		}
		if(head == temp)
		{
			head = NULL;
			free(temp);
		}
		else
		{
			prenode->next = NULL;
			free(temp);
		}
		count--;
	}
}
void deleteAtposition()
{
if(head == NULL)
{
	printf("Empty\n");
}else
{
	int pos, count1=0;
	printf("enter postion to delete:");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		printf("You enter wrong position\n");
	}
	else{
		temp = head;
		while(count1<pos-1)
		{
			prenode = temp;
			temp = temp->next;
			count1++;
		}
		prenode->next = temp->next;
		count--;
	}
}
}

void display()
{
	if(head==NULL){
		printf("Empty\n");
	}
	else{
	temp = head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("\n");
	}
}

void main()
{
	int x,ch;
	head = NULL;
	do{
		newnode = malloc(sizeof(struct node));
		printf("Enter data for linklist");
		scanf("%d",&newnode->data);
		newnode->next = NULL;
		if(head == NULL)
		{
			head = newnode;
			temp = newnode;
		}else
		{
			temp->next = newnode;
			temp = newnode;
		}
		count++;
		printf("to continue enter 1:");
		scanf("%d",&x);
	}while(x==1);
	
	do{
	printf("1. insertion at first\n2. insertion at last\n3.insertion at position\n4.deletion at first\n5. deletion at last\n6.delete at position\n7.display\n8.Exit\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		insertAtfirst();
	break;
	case 2:
		insertAtlast();
	break;
	case 3:
		insertAtposition();
	break;
	case 4:
		deletionAtfirst();
	break;
	case 5:
		deletionAtlast();
	break;
	case 6:
		deleteAtposition();
	break;
	case 7:
		display();
	break;
	case 8:
		printf("Thank You😊️");
	break;
	default:
		printf("Wrong choice☠️");
	break;
	}
	}while(ch!=8);
}








