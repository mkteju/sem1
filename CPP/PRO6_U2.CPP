#include<iostream.h>
#include<conio.h>
class employee
{
 protected:
	  int id;
	  char name[30];
	  int scale_of_salary;
 public:
       void computpay(int);
};
class male:public employee
{
 int days;
 int hours;
 public:
       void getdata();
};
class female:public employee
{
 int hours;
 public:
       void getdata();
       female()
       {
	hours=40;
       }

};
void male::getdata()
{
 cout<<"\n enterID:";
 cin>>id;
 cout<<"\n Enter Name:";
 cin>>name;
 cout<<"\n Enter scale of salary on hourly basis:";
 cin>>scale_of_salary;

 cout<<"\n Enter num of days worked:";
 cin>>days;
 cout<<"\n Enter num of hours worked:";
 cin>>hours;
 int totalhours=0;
 totalhours=days*24+hours;
 computpay(totalhours);
}
void female::getdata()
{
 cout<<"\n Enter ID:";
 cin>>id;
 cout<<"\n Enter name:";
 cin>>name;
 cout<<"\n enter scale of salary on hourly basis:";
 cin>>scale_of_salary;
 computpay(hours);
}
void employee::computpay(int hrs)
{
 int totalpay=0;
 totalpay=scale_of_salary*hrs;
 cout<<"\n Total pay:"<<totalpay;
}
void main()
{
 male m;
 female f;
 clrscr();
 m.getdata();
 f.getdata();
 getch();
}