#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
 int data;
 struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack*,int);
struct stack *pop(struct stack *);
struct stack *peep(struct stack *);
struct stack *display(struct stack *);

struct stack *push(struct stack *top,int x)
{
 struct stack *ptr;
 ptr=(struct stack*)malloc(size of(struct stack *));
 ptr->data=x;
 if(top==NULL)
 {
  top=ptr;
  top->next=NULL;
 }
 else
 {
  ptr->next=top;
  top=ptr;
 }
 return top;
}
struct stack *pop(struct stack *top)
{
 struct stack *ptr;
 ptr=top;
 if(top==NULL)
   printf("stack is empty..");
 else
 {
  top=top->next;
  printf("%d is deleted",ptr->data);
  free(ptr);
 }
 return top;
}
struct stack *peep(struct stack *top)
{
 struct stack *ptr;
 ptr=top;
 if(top==NULL)
  {
   printf("\n stack is empty..");
  }
  else
  {
   printf("Top element of list is %d:",ptr->data);
  }
  return top;
}
struct stack *dispaly(struct stack  *top)
{
 struct stack *ptr;
 ptr=top;
 if(top==NULL)
 {
  printf("stack is empty..");
 }
 else
 {
  while(ptr!=NULL)
  {
   printf("\t %d",ptr->data);
   ptr=ptr->next;
  }
 }
 return top;
}
void main()
{
 int x,ch;
 clrscr();
 do
 {
  printf("\n 1..push");
  printf("\n 2..pop");
  printf("\n 3..peep");
  printf("\n 4..display");
  printf("\n 5..Exit");
  printf("\n Enter your choice..");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("\n Enter the number to push..");
	  scanf("%d",&x);
	  top=push(top,x);
	  break;
  case 2:top=pop(top);
	 break;
  case 3:top=peep(top);
	 break;
  case 4:top=display(top);
	 break;
  case 5:
	 break;
  }
 }while(ch!=5);
 getch();
}
