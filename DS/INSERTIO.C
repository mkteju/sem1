#include<stdio.h>
#include<conio.h>
void insertion_sort(int [],int);
void main()
{
 int a[20],i,j,n;
 clrscr();
 printf("enter number of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n enter %d element:",i+1);
  scanf("%d",&a[i]);
 }
  insertion_sort(a,n);
  printf("sorted array is..");
  for(i=0;i<n;i++)
  {
   printf("\n %d \n",a[i]);
  }
  getch();
}
void insertion_sort(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
  temp=a[i];
  j=i-1;
  while((temp<a[j])&&(j>=0))
  {
   a[j+1]=a[j];
   j=j-1;
  }
  a[j+1]=temp;
 }
}
