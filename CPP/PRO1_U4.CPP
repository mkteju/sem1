#include<iostream.h>\\pro1_u4
#include<conio.h>
template<class T>
T maxArray(T arr[])
{
 T max=arr[0];
 for(int i=1;i<5;i++)
 {
  if(arr[i]>max)
  {
   max=arr[i];
  }
 }
 return max;
}
void main()
{
 float arr[5];
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
  cout<<"enter element"<<i+1<<":";
  cin>>arr[i];
 }
 float max=maxArray(arr);
 cout<<"maximum value is:"<<max;
 getch();
}

