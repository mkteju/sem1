#include<iostream.h>
#include<conio.h>
#include<math.h>
double power(double m,int n=2);
void main()
{
 double ans,m,n;
 char choice;
 clrscr();
 cout<<"enter value of m:";
 cin>>m;
 cout<<"Do you want to consider default arguments?(Y \ N)";
 cin>>choice;
 if(choice=='y' || choice=='Y')
 {
  ans=power(m);
  cout<<"The power of "<<m<<"is"<<ans;
 }
 else
 {
  cout<<"enter value of n=";
  cin>>n;
  ans=power(m,n);
  cout<<"The power of "<<m<<"is"<<ans;
 }
 getch();
}
double power(double m,int n)
{
 double ans;
 ans=pow(m,n);
 return ans;
}

