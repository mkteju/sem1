#include<iostream.h>
#include<conio.h>
class string
{
 char *str;
 public:
  void print_string();
  string()
  {
   str="default string";
  }
  string(char *s)
  {
   str=s;
  }
  ~string()
  {
   str='\0';
  }
};
void string::print_string()
{
 cout<<str<<endl;
}
void main()
{
 char *txt="hello world";
 char *text="This is c++ program";
 string s1(txt);
 clrscr();
 s1.print_string();
 string s2(text);
 s2.print_string();
 string s3=s1;
 s3.print_string();
 string s4;
 s4.print_string();
 string s5=s2;
 s5.print_string();
 getch();
x}