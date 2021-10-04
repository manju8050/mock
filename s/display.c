#include"header.h"

void display()
{
	
	struct node *ptr=head;
	if(ptr==NULL)
		printf("\nNo nodes to print");
	
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
