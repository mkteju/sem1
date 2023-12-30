#include<stdio.h>
#include<conio.h>
int n,q[10],f=0,r=0;
void main()
{
 int ch;
 void insert();
 void display();
 void delet();
 clrscr();
 printf("\n enter the size if queue");
 scanf("%d",&n);
 do
 {
 clrscr();
 printf("\n 1..insert");
 printf("\n 2..delet");
 printf("\n 3..display");
 printf("\n 4..exit");
 printf("\n enter your choise::");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:insert();
  break;
  case 2:delet();
  break;
  case 3:display();
  break;
  case 4:exit(0);
 }
 getch();
 }while(ch!=4);
}

void insert()
{
 if(r>=n)
 {
  printf("\n overflow");
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
void delet()
{
 if(f==0)
 {
  printf("\n underflow");
 }
 else
 {
  int x;
  x=q[f];
  if(f==r)
  f=r=0;
 else
  f++;
  printf("\n %d is deleted",x);
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
  printf("\n   ");
  for(i=f;i<=r;i++)
  {
   printf("%d",q[i]);
  }
 }
}

