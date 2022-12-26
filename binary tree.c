#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *l;
  struct node *R;
};
struct node*createnode(int val)
{
 struct node*p;
 p=(struct node*)malloc(sizeof(struct node));
 p->l=NULL;
 p->R=NULL;
 return p;
};
preorder(struct node*root){
if (root!=NULL){
    printf("%d",root->data);
    preorder(root->l);
    preorder(root->R);

}
}
int countnode(int data)
{
    if(data==NULL)
    return 0;
    else
    return 1+l->data+R->data;

}

int main(){

 struct node *n1,*n2,*n3,*n4;
 n1=getnode(2);
 n2=getnode(4);
 n3=getnode(5);
 n4=getnode(6;)
 n1->data=data;
 n1->l=n2;
 n1->R=n3;
 n3->l=n4;
 printf("preorder traversal\n");
 printf("n1");
 printf("postorder traversal\n");
 printf("n2");
 printf("inorder traversal\n");
 printf("n1");
 return ;




}





