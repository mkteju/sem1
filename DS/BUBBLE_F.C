#include<stdio.h>
#include<conio.h>
void bubble_sort(int [],int);
void main()
{
 int a[20],i,n,j;
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
  printf("\n %d \n",a[i]);
 }
  bubble_sort(a,n);
  getch();
}
 /* bubble sort*/
void bubble_sort(int a[],int n)
{
 int i,j,temp;
 for(i=1;i<=n;i++)
 {
 for(j=0;j<=n-1;j++)
  {
  if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("\n sorted array is..");
 for(i=1;i<=n;i++)
 {
  printf("\n %d \n",a[i]);
 }
}


