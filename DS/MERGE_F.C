#include<stdio.h>
#include<conio.h>
void merge(int a[],int,int,int);
void merge_sort(int [],int,int);
void main()
{
 int a[20],i,j,k,n;
 clrscr();
 printf("enter number of elemets:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\n enter %d element",i);
 scanf("%d",&a[i]);
 }
 merge_sort(a,0,n-1);
 printf("sorted array is..");
 for(i=0;i<n;i++)
 {
  printf("\n %d \n",a[i]);
 }
 getch();
}
void merge(int a[],int beg,int mid,int end)
{
 int i=beg,j=mid+1,index=beg,k,temp[10];
 while((i<=mid)&&(j<=end))
 {
  if(a[i]<a[j])
  {
   temp[index]=a[i];
   i++;
  }
  else
  {
   temp[index]=a[j];
   j++;
  }
  index++;
 }
 if(i>mid)
 {
  while(j<=end)
  {
   temp[index]=a[j];
   j++;
   index++;
  }
 }
 else
 {
  while(i<=mid)
  {
   temp[index]=a[i];
   i++;
   index++;
  }
 }
 for(k=beg;k<index;k++)
 {
  a[k]=temp[k];
 }
}
void merge_sort(int a[],int beg,int end)
{
 int mid;
 if(beg<end)
 {
  mid=(beg+end)/2;
  merge_sort(a,beg,mid);
  merge_sort(a,mid+1,end);
  merge(a,beg,mid,end);
 }
}