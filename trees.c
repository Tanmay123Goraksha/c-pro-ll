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


void preorder(struct node * root){

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
inorder(ro ot->right);

}

}



int isBST(struct node* root){

    static struct node *prev = NULL;
    if(root!=NULL){
      if(isBST(root->left)){
        return 0;
      }
      if(prev!=NULL && root->data <= prev->data){
        return 0;
      
prev = root;
return isBST(root->right);


    }
else{
    return 1;
}

}
}
 

 struct node * searchrecursive(struct node* root, int key){
if(root == NULL){
    return NULL;
}
if(key == root->data){
 return root;
}
else if(key<root->data){
    return search(root->left,key);
}
else if(key>root->data){
return search(root->right,key);
}

}

struct node * searchiteratively(struct node* root, int key){

while(root!=NULL){
if(key == root->data)
return root;
}
else if(key<root->data){
    root = root ->left;
}
else if(key>root->data){
    root = root ->right;
}

return NULL;

}







void insert(struct node *root, int key){

struct node *prev = NULL;
while(root!=NULL){
prev = root;
if(key == root->data){
    return;
}
else if(key<root->data){
 root = root->left;
}
else if(key>root->data){
    root = root->right
}

}

struct node* new = CreateNode(key);
if(key<prev->data){
    prev->left = new;
}
else{
    prev->right = new;
}




}




void delete(){















}








 


int main(){

struct node *p = CreateNode(5);
struct node *p1 = CreateNode(3);
struct node *p2 = CreateNode(6);
struct node *p3 = CreateNode(1);
struct node *p4 = CreateNode(4);

p->left = p1;
p->right = p2;
p1->left = p3;
p1->right = p4;  



return 0;

} 