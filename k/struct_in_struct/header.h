#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct data
	{
		unsigned int pid;
	}*inside;
	
	struct node *next;
};
extern struct node *ptr;
struct node *head;
struct node *last;

void create(int);
void delete();
void display();


/*
makefile with make clean enabled + tags+ .h file + Node_delete.c + Node_create.c + main.c 
 Wap : circular LL with 5 nodes with Data as : struct data { unsigned int pid ; unsigned int ppid ;} --> struct inside struct 
 give pid ; 1,2,3,4,5, : print data from all 5 nodes and delete nodes which have odd numbers in pid */
