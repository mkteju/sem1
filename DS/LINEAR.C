#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],n,x,i,flag=0;
 clrscr();

 printf("\n enter elements:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  printf("\n enter %d element:",i);
  scanf("%d",&a[i]);
 }
 printf("enter element to find:");
 scanf("%d",&x);

 for(i=1;i<=n;i++)
 {
  if(a[i]==x)
  {
   flag=1;
   printf("element found at %d position:",i);
  }
 }
 if(flag==0)
 {
  printf("element not found");
 }
 getch();
}
