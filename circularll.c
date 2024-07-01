#include<stdio.h>


struct node{

int data;
struct node *next;

}*Head;



void create(int A[],int n)
{

int i;
struct node *t,*last;
Head = (struct node *)malloc(sizeof(struct node));
Head->data = A[0];
Head->next=Head;
last=Head;

for(i=0;i<n;i++)
{

t = (struct node *)malloc(sizeof(struct node));
t->data = A[i];
t->next = last->next;
last->next=t;
last=t;


}


    
}



















int main(){

    return 0;
}
