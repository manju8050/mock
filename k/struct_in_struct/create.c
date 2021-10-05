#include"header.h"


void create(int element)
{
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	ptr->inside=(struct data*)malloc(sizeof(struct data));
	
       
	if(ptr==NULL)
		printf("\nError creating node");
		
	ptr->inside->pid=element;
	ptr->next=NULL;
	
	if(head==NULL)
	{
		head=ptr;
		last=ptr;
	}
	else
	{
		last->next=ptr;
		last=ptr;
	}
}

