#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void Print(struct node *head)
{
	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	struct node*head,*temp,*tail;
	head=NULL,temp=NULL,tail=NULL;
	int i;
	for(i=1;i<=3;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=i;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			tail->next=NULL;
		}
		else
		{
			tail->next=temp;
			tail=temp;
			tail->next=NULL;	
		}	
	}
	Print(head);
	return 0;	
}
