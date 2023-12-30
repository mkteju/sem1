#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct tree
{
 int info;
 struct tree*left;
 struct tree*right;
};
struct tree*insert(struct tree*,int);
void inorder(struct tree*);
void preorder(struct tree*);
void postorder(struct tree*);
int main()
{
 struct tree *root;
 int ch,val;
 root=NULL;
 clrscr();
 do
 {
  printf("\n 1:insert");
  printf("\n 2:inorder");
  printf("\n 3:preorder");
  printf("\n 4:postorder");
  printf("\n 5:exit");
  printf("\n enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("\n enter new element:");
	  scanf("%d",&val);
	  root=insert(root,val);
	  printf("\n");
	  inorder(root);
	  getch();
	  clrscr();
	  break;
   case 2:printf("\n inorder traversal of tree");
	  inorder(root);
	  getch();
	  clrscr();
	  break;
   case 3:printf("\n preorder traversal of tree");
	  preorder(root);
	  getch();
	  clrscr();
	  break;
   case 4:printf("\n postorder trevaersal of tree");
	  postorder(root);
	  getch();
	  clrscr();
	  break;
   case 5:
	  break;
  }
 }while(ch!=5);
  return 0;
}
struct tree *insert(struct tree *root,int x)
{
 if(!root)
 {
  root=(struct tree*)malloc(sizeof(struct tree));
  root->info=x;
  root->left=NULL;
  root->right=NULL;
  return(root);
 }
 if(root->info>x)
 {
   root->left=insert(root->left,x);
 }
 else
 {
  if(root->info<x)
  {
     root->right=insert(root->right,x);
  }
 }
  return(root);
}
void inorder(struct tree *root)
{
 if(root!=NULL)
 {
  inorder(root->left);
  printf("\t %d",root->info);
  inorder(root->right);
 }
  return 0;
}
void preorder(struct tree *root)
{
 if(root!=NULL)
 {
  printf("\t %d",root->info);
  preorder(root->left);
  preorder(root->right);
 }
 return;
}
void postorder(struct tree *root)
{
 if(root!=NULL)
 {
  postorder(root->left);
  postorder(root->right);
  printf("\t %d",root->info);
 }
 return;
}
