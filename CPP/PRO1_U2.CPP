#include<iostream.h>
#include<conio.h>
class class2;
class class1
{
 int num1;
 friend void find_max(class1,class2)
 public:
  void get_data();
  class1()
  {
   num1=0;
  }
  ~class1()
  {
   num1=0;
  }
};
class class2
{
 int num2;
 friend void find_max(class1,class2)
 public:
    void get_data();
    class2()
    {
     num2=0;
    }
    ~class2()
    {
     num2=0;
    }
};
void class1::get_data()
{
 cout<<"Enter num1:";
 cin>>num1;
}
void class2::get_data()
{
 cout<<"\n Enter num2:";
 cin>>num2;
}
void find_max(class1 c1,class2 c2)
{
 if(c1.num1>c2.num2)
 {
  cout<<c1.num1<<"is greter";
 }
 else if(c2.num2>c1.num1)
 {
  cout<<c2.num2<<"is greter";
 }
 else
 {
  cout<<"Both are equal";
 }
}
void main()
{
 class1 c1;
 class2 c2;
 clrscr();
 c1.get_data();
 c2.get_data();
 find_max(c1,c2);
 getch();
}