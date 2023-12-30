#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,n,x,low,mid,high;
  low=1;
  high=n;
  mid=(low+high)/2;

 clrscr();
 printf("enter elements:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n enter%d element:",i);
  scanf("%d",&a[i]);
 }
 printf("enter element to find:");
 scanf("%d",&x);

  while(low<=high && x!=a[mid])
  {
   if(x<a[mid])
    high=mid-1;
   else if(x>a[mid])
    low=mid+1;
   mid=(low+high)/2;
  }
  if(x==a[mid])
  printf("element %d found at position %d",x,mid);
  if(low>high)
  {
   printf("element not found..");
  }
  getch();
}