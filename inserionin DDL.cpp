#include<stdio.h>
struct node
{
	int data;
	struct node *head;
	struct node *prev;
}
void insert(struct node** head,int data,int position)
{
	struct node*temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	if(!temp)
	{
		printf("No available memory\n");
		return;
	}
	temp->data=data;
	int k=1;
	if(position==1)
	{
		temp->next=*head;
		temp->prev==NULL;
		if(*head==NULL)         //important
			*head->prev=NULL;
		*head=temp;
		return
	}
	p=*head;
	while(k<position-1&&p!=NULL)
	{
		p=p->next;
		k++;
	}
	if(k!=position)
		printf("Not Possible");
	else
	{
		temp->next=p->next;
		temp->prev=p;
		if(p->next!=NULL)
			p->next->prev=temp;
		p->next=temp;
		return;	
	}	
}
