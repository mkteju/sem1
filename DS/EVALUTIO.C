#include<stdio.h>
#include<conio.h>

#define MAX 100
int s[MAX];
int top=0;

void push(int s[],int x);
int pop(int s[]);
int eva(char exp[]);

void main()
{
 int x;
 char exp[100];
 clrscr();
 printf("\n enter postfix expression:");
 fflush(stdin);
 gets(exp);
 x=eva(exp);
 printf("\n evaluation is=%d",x);
 getch();
}
int eva(char exp[])
{
 int i=0;
 int op1,op2,val;
 while(exp[i]!='\0')
 {
  if(isdigit(exp[i]))
  push(s,(int)(exp[i]-'0'));
  else
  {
   op2=pop(s);
   op1=pop(s);
   switch(exp[i])
   {
   case'+':val=op1+op2;
   break;
   case'-':val=op1-op2;
   break;
   case'*':val=op1*op2;
   break;
   case'/':val=op1/op2;
   break;
   case'%':val=op1%op2;
   break;
   }
   push(s,val);
  }
  i++;
 }
 return(pop(s));
}
void push(int s[],int x)
{
 if(top>=s[MAX])
 {
  printf("\n ...overflow...");
 }
 else
 {
  top++;
  printf("\n entre element:");
  scanf("%d",&x);
 }
}
int pop(int s[])
{
 if(top==0)
 {
  printf("\n...underflow...");
 }
 else
 {
  int x;
  x=s[MAX];
  top--;
  printf("\n %d is deleted",x);
 }
}