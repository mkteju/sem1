#include<stdio.h>
#include<conio.h>
void linear_search(int [],int,int);
void main()
{
 int a[20],n,i,x;
 clrscr();

 printf("\n enter elements:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("\n enter %d element:",i+1);
  scanf("%d",&a[i]);
 }
 printf("\n enter element to find:");
 scanf("%d",&x);
 linear_search(a,n,x);
 getch();
}

void linear_search(int a[],int n,int x)
{
 int i,flag=0;

 for(i=0;i<n;i++)
 {
  if(x==a[i])
  {
   printf("\n element found at %d position:",i+1);
   flag=1;
  }
 }
 if(flag==0)
 {
  printf("element not found");
 }
}
