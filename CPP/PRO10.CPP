#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int num1,num2;
 void input();
 void largest(int,int);
};
void demo::input()
{
 cout<<"Enter num1:";
 cin>>num1;
 cout<<"\n Enter num2:";
 cin>>num2;
}
void demo::largest(int n1,int n2)
{
 if(n1>n2)
 {
  cout<<n1<<" is largest";
 }
 else
 {
  cout<<n2<<" is largest";
 }
}
void main()
{
 demo d;
 demo *p=&d;
 clrscr();
 p->input();
 p->largest(p->num1,p->num2);
 getch();

}