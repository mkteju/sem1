#include<iostream.h>\\pro5_u3
#include<conio.h>
#include<string.h>
class string
{
 char *str;
 public:
   string(char *s)
   {
    int len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
   }
   ~string()
   {
    delete str;
   }
   void operator +(string);
};
void string::operator +(string st)
{
 strcat(str," ");
 strcat(str,st.str);
 cout<<"final string is:"<<str;
}
void main()
{
 clrscr();
 string s1("hellow all!");
 string s2("how are you?");
 s1+s2;
 getch();
}