#include<stdio.h>

struct node {
int data;
struct node* right;
struct node* left;


}  

struct node* CreateNode(int data){

struct node *n;
n = (struct node *)malloc(sizeof(struct node));
n->data = data;
n->left = NULL;
n->right = NULL;
return n;

}


void preorder(struct Node * root){

if(root!= NULL)
{
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
 
}}


void postorder(){

if(root! = NULL){

postorder(root->left);
postorder(root->right);
printf("%d",root->data);

}
 }


void inorder(){

if(root! = NULL){

inorder(root->left);
printf("%d",root->data);
inorder(root->right);


}








}










int main(){

struct node *p = CreateNode(2);
struct node *p1 = CreateNode(3);
struct node *p2 = CreateNode(4);

p->left = p1;
p->right = p2;



return 0;

} 