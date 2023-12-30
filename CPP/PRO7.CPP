#include<iostream.h>
#include<conio.h>
class class1
{
 int a;
 friend void swap();
 public:
 void getdata()
 {
  cout<<"Enter value of a:";
  cin>>a;
 }
 void display()
 {
  cout<<"\n After swap a="<<a;
 }
};
class class2
{
 int b;
 friend void swap();
 public:
 void getdata()
 {
  cout<<"Enter value of b:";
  cin>>b;
 }
 void display()
 {
  cout<<"\n After swap b="<<b;
 }
};
void swap()
{
 int temp=0;
 class1 c1;
 class2 c2;
 c1.getdata();
 c2.getdata();
 temp=c1.a;
 c1.a=c2.b;
 c2.b=temp;
 c1.display();
 c2.display();
}
void main()
{
 clrscr();
 swap();
 getch();
}