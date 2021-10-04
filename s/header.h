#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head;
struct node *last;

void create(int);
void delete();
void display();
