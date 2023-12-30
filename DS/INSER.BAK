#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,j,n,temp;
 clrscr();
 printf("Enter number of elements:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("Enter %d elements:",i+1);
  scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
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
 printf("sorted array is:");
 for(i=0;i<n;i++)
 {
  printf("\n %d \n",a[i]);
 }
 getch();
}