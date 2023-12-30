#include<stdio.h>
#include<conio.h>
int q[10],f=-1,r=-1,max=5;
void insert();
void delet();
void display();

void main()
{
 int ch,val;
 clrscr();
 do
 {
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
   case 4:
   break;
  }
 }while(ch!=4);
 getch();
}
void insert()
{
 int x;
 printf("\n enter value:");
 scanf("%d",&x);
 if(f==0 && r==max-1)
 {
  f=r=0;
  q[r]=x;
 }
 else if(r==max-1 && f!=0)
 {
  r=0;
  q[r]=x;
 }
 else
 {
  r++;
  q[r]=x;
 }
}
void delet()
{
 int val;
 if(f==-1)
 {
  printf("\n underflow");
 }
 val=q[f];
 if(f==r)
 {
  f=r=-1;
 }
 else
 {
  if(f==max-1)
  {
   f=0;
  }
  else
  {
   f++;
  }
 }
 printf("\n valu is deleted:%d",val);
}
void display()
{
 int i;
 if(f!=-1 && r!=-1)
 {
  if(r>=f)
  {
   for(i=f;i<=r;i++)
   {
    printf("\n\t%d",q[i]);
   }
  }
  else
  {
   for(i=0;i<=r;i++)
   {
    printf("\n\t%d",q[i]);
   }
   for(i=f;i<max;i++)
   {
    printf("\n\t%d",q[i]);
   }
  }
 }
}

