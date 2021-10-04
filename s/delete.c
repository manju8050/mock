#include"header.h"

void delete()
{
	
	struct node *ptr=head;
	head=ptr->next;
	
	free(ptr);
}
