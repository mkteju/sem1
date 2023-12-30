#include<stdio.h>
#include<conio.h>
int n,q[10],f=0,r=0;
void main()
{
 int ch;
 void insert();
 void display();
 clrscr();
 printf("\n enter the size of queue:");
 scanf("%d",&n);
 do
 {
  clrscr();
  printf("\n 1:insert");
  printf("\n 2:display");
  printf("\n 3:exit");
  printf("\n enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert();
   break;
   case 2:display();
   break;
   case 3:
   break;
  }
  getch();
 }while(ch!=3);
}
void insert()
{
 if(r>=n)
 {
  printf("\noverflow");
 }
 else
 {
  r++;
  printf("\n enter the element:");
  scanf("%d",&q[r]);
  if(f==0)
  f=1;
 }
}
void display()
{
 if(f==0)
 {
  printf("\n underflow");
 }
 else
 {
  int i;
  for(i=f;i<=r;i++)
  {
   printf("%d \n",q[i]);
  }
 }
}
