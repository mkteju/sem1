#include<iostream.h>
#include<conio.h>
class calculate
{
 int num1,num2;
 public:
 void getnumbers();
 void calculatenumbers();
};
void calculate::getnumbers()
{
 cout<<"Enter number 1:";
 cin>>num1;
 cout<<"\nEnter number 2:";
 cin>>num2;
}
void calculate::calculatenumbers()
{
 int sum,diff,mul,div;
 sum=num1+num2;
 diff=num1-num2;
 mul=num1*num2;
 div=num1/num2;
 cout<<"\nSum="<<sum;
 cout<<"\nDiffrence="<<diff;
 cout<<"\nMultiplication="<<mul;
 cout<<"\nDivision="<<div;
}
void main()
{
 calculate c;
 c.getnumbers();
 c.calculatenumbers();
 getch();
}
