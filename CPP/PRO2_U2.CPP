#include<iostream.h>//pro 2
#include<conio.h>
class class3;
class class2;
class class1
{
 int num1;
 friend void find_avg(class1,class2,class3);
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
 friend void find_avg(class1,class2,class3);
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
class class3
{
 int num3;
 friend void find_avg(class1,class2,class3);
 public:
    void get_data();
    class3()
    {
     num3=0;
    }
    ~class3()
    {
     num3=0;
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
void class3::get_data()
{
 cout<<"\n Enter num3:";
 cin>>num3;
}
void find_avg(class1 c1,class2 c2,class3 c3)
{
 int avg;
 avg=(c1.num1+c2.num2+c3.num3)/3;
 cout<<"Average of "<<c1.num1<<","<<c2.num2<<","<<c3.num3<<" is:"<<avg;
}
void main()
{
 class1 c1;
 class2 c2;
 class3 c3;
 clrscr();
 c1.get_data();
 c2.get_data();
 c3.get_data();
 find_avg(c1,c2,c3);
 getch();
}

