#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    int data;
    struct sll *link;
}node;

node *first = NULL;
node *last = NULL;
node *spl = NULL;
int count = 0;


void creat(int ele)
{
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = ele;
    ptr->link = NULL;
    if(first==NULL)
    {
        first = ptr;
        last = ptr;
    }
    else
    {
        last->link = ptr;
        last = ptr;
    }
}

void display()
{
    if(first == NULL)
    {
        printf("empty list\n");
    }
    else
    {
       node *temp = first;
       while(temp != NULL)
       {
           printf("%d\n",temp->data);
           temp = temp->link;
       } 
    }
}
void is_looped()
{
    if(last->link == NULL)
    {
        printf("NO LOOP FOUND\n");
    }
    else
    {
        printf("LOOP IS DETECTED\n");
        spl=last->link;
    }

}

void find_len()
{
    node *temp = spl;
    printf("elements are:");
    do
    {
        ++count;
        printf("%d\n",temp->data);
        temp=temp->link;
        
    } while (temp!=spl);
    
}

int main()
{
    display();
    creat(1);
    creat(2);
    creat(3);
    creat(4);
    creat(5);
    creat(6);
    creat(7);
    creat(8);
    display();


    is_looped();
    last->link = first->link->link;

    is_looped();

    find_len();
    printf("length of loop is :%d",count);
   

    
}

//      //( last->link = first->link->link;)
empty list
1
2
3
4
5
6
7
8
NO LOOP FOUND
LOOP IS DETECTED
elements are:3
4
5
6
7
8
length of loop is :6
  
  
//        //(last->link = first->link;)
empty list
1
2
3
4
5
6
7
8
NO LOOP FOUND
LOOP IS DETECTED
elements are:2
3
4
5
6
7
8
length of loop is :7

