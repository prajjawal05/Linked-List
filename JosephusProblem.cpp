#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void* insert(struct node *head,struct node *tail,int n);
void jos(struct node *head,int m);
void print(struct node *head);
int main()
{
	printf("Enter number of elements to be inserted\n");
	int n,m;
	scanf("%d",&n);
	struct node *head=NULL,*tail=NULL;
	//printf("1\n");
	head=insert(head,tail,n);
	print(head);
	printf("ENTER the Joseph constant\n");	
	scanf("%d",&m);
        jos(head,m);
	return 0;
}
void* insert(struct node *head,struct node *tail,int n)
{
	int i;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node**));
	int y;
	scanf("%d",&y);
	temp->data=y;
	//printf("1\n");
	temp->next=NULL;
	//printf("1\n");
	head=temp;
	tail=temp;
	//printf("%d\n",temp->data);
	for(i=2;i<=n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node*));
		int x;
		scanf("%d",&x);
		temp->data=x;
		tail->next=temp;
		tail=temp;
		tail->next=NULL;
		//printf("%d\n",tail->data);
	}
	tail->next=head;
	return head;
}
void print(struct node *head)
{
	int i;
	struct node*temp=head;
	for(i=0;i<13;i++)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void jos(struct node *head, int m)
{
	int i;
	while(head->next!=head)
	{
		for(i=1;i<m-1;i++)
			head=head->next;
		head->next=head->next->next;
		head=head->next;
	}
	printf("%d\n",head->data);
}	
		
