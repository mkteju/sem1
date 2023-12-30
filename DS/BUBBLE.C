#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,n,j,temp;
 clrscr();
 printf("enter elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n enter %d  element:",i+1);
  scanf("%d",&a[i]);
 }
 printf("unsorted array is:");
 for(i=0;i<n;i++)
 {
  printf("\n %d \n",a[i]);
 }
 /*bubble sort*/
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("sorted array is..");
  for(i=0;i<n;i++)
  printf("\n %d \n",a[i]);
  getch();
}
