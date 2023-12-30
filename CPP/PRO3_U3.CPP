#include<iostream.h>//pro3_u3
#include<conio.h>
class base
{
 protected:
    int num1;
    int num2;
 public:
    virtual void calculate_data()=0;
};
class derive1:public base
{
 private:
    int result;
 public:
    void calculate_data()
    {
     cout<<"enter num1=";
     cin>>num1;
     cout<<"enter num2=";
     cin>>num2;
     result=num1+num2;
     cout<<"The sum of two number is:"<<result<<endl;
    }
};
class derive2:public base
{
 private:
    int result;
 public:
   void calculate_data()
   {
    cout<<"enter num1:";
    cin>>num1;
    cout<<"enter num2:";
    cin>>num2;
    result=num1*num2;
    cout<<"The multiplication:"<<result<<endl;
   }
};
void main()
{
 derive1 d1;
 derive2 d2;
 base *b;
 b=&d1;
 b->calculate_data();
 b=&d2;
 b->calculate_data();
 getch();
}