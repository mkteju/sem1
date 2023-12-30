#include<stdio.h>
#include<conio.h>
int n,s[10],top=0;
 void push();
 void pop();
 void peep();
 void display();
void main()
{
 int ch;
 clrscr();
 printf("\n Enter the size of stack:");
 scanf("%d",&n);
do
 {
  printf("\n 1..push");
  printf("\n 2..pop");
  printf("\n 3..peep");
  printf("\n 4..display");
  printf("\n 5..exit");
  printf("\n enter your choice::");
  scanf("%d",&ch);
 switch(ch)
 {
  case 1:push();
  break;
  case 2:pop();
  break;
  case 3:peep();
  break;
  case 4:display();
  break;
  case 5:
  break;
 }
 getch();
}
while(ch!=5);
}
void push()
{
 if(top>=n)
 {
  printf("\n....overflow...");
 }
 else
 {
  top++;
  printf("\n Enter the element:");
  scanf("%d",&s[top]);
 }
}
void pop()
{
 if(top==0)
  {
   printf("\n....underflow..");
  }
 else
  {
  int x;
  x=s[top];
  top--;
  printf("\n %d is deleted",x);
  }
}
void peep()
{
 if(top==0)
 {
  printf("\n stack is empty...");
 }
 else
 {
  printf("\n Top most element of stack is %d",s[top]);
 }
}
void display()
{
 int i;
 for(i=0;i<=top;i++)
 {
  printf("\n %d",s[i]);
 }
}