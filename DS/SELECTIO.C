#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,j,temp,a[20],min;
 clrscr();
 printf("enter elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n enter %d element:",i+1);
  scanf("%d",&a[i]);
 }
 printf("unsorted array is..");
 for(i=0;i<n;i++)
 {
  printf("\n %d \n",a[i]);
 }
/*selection sort*/
for(i=0;i<n;i++)
{
 min=i;
 for(j=i+1;j<n;j++)
 {
  if(a[j]<a[min])
  {
   min=j;
  }
 }
 if(min!=1)
 {
  temp=a[i];
  a[i]=a[min];
  a[min]=temp;
 }
}
printf("\n sorted array is..");
for(i=0;i<n;i++)
{
 printf("\n %d \n",a[i]);
}
getch();
}