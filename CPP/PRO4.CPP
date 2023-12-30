#include<iostream.h>
#include<conio.h>

class student
{
 int rollno;
 char name[25];
 float science,maths,english,c,cpp;
 float total;
 public:
 void getdata()
 {
  cout<<"\n Enter student rollno=";
  cin>>rollno;
  cout<<"\nEnter student name=";
  cin>>name;
  cout<<"\nEnter mark in science=";
  cin>>science;
  cout<<"\nEnter mark in maths=";
  cin>>maths;
  cout<<"\nEnter mark in english=";
  cin>>english;
  cout<<"\nEnter mark in c=";
  cin>>c;
  cout<<"\nEnter mark of in cpp=";
  cin>>cpp;
 }
 void totalmarks()
 {
   total=science+maths+english+c+cpp;
   cout<<"\n Total marks:"<<total;
 }
 void displaydata()
 {
  cout<<"rollno="<<rollno;
  cout<<"\n Name="<<name;
  cout<<"\n Mark of followinf subject:";
  cout<<"\n Science="<<science;
  cout<<"\n Maths="<<maths;
  cout<<"\n English="<<english;
  cout<<"\n c="<<c;
  cout<<"\n cpp="<<cpp;
  totalmarks();
 }
};
void main()
{
 student std;
 student std1;
 std.getdata();
 std.displaydata();
 std1.getdata();
 std1.displaydata();
 getch();
}