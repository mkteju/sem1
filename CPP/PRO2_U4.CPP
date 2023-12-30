#include<iostream.h>\\pro2_u4
#include<conio.h>
#define MAX 25
 template<class T>
 class Array
 {
  private:
      T arr[MAX];
      int elements;
  public:
      Array()
      {
       elements=0;
       for(int i=0;i<MAX;i++)
	 arr[i]=0;
      }
      Array(int e)
      {
       elements=e;
       for(int i=0;i<elements;i++)
	  arr[i]=0;
      }
      ~Array()
      {
       elements=0;
       for(int i=0;i<MAX;i++)
	  arr[i]=0;
      }
      void getelements();
      void showelements();
 };
 template<class T>
 void Array<T>::getelements()
 {
  cout<<"enter"<<elements<<"elements:";
  for(int i=0;i<elements;i++)
    cin>>arr[i];
 }
 void Array<int>::showelements()
 {
  cout<<"entered elements are:";
  for(int i=0;i<elements;i++)
    cout<<"\n"<<arr[i];
 }
 void main()
 {
  Array<int> a1(5);
  clrscr();
  a1.getelements();
  a1.showelements();
  getch();
 }
