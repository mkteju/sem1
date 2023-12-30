#include<stdio.h>
#include<conio.h>
void selection_sort(int [],int);
void main()
{
 int i,n,j,a[20];
 clrscr();
 printf("\n enter elements:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("\n enter %d element:",i);
  scanf("%d",&a[i]);
 }
 printf("unsorted array is..");
 for(i=1;i<=n;i++)
 {
  printf( "\n %d",a[i]);
 }
 selection_sort(a,n);
 getch();
}
 /*selection sort*/
void selection_sort(int a[],int n)
{
 int i,j,min,temp;
 for(i=1;i<=n;i++)
 {
  min=i;
  for(j=i+1;j<=n;j++)
  {
   if(a[j]<a[min])
   {
    min=j;
   }
  }
  if(min!=i)
  {
   temp=a[i];
   a[i]=a[min];
   a[min]=temp;
  }
 }
 printf("\n sorted array is..");
 for(i=1;i<=n;i++)
 {
  printf("\n %d",a[i]);
 }
}


