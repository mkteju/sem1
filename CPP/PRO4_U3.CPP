#include<iostream.h>\\pro4_u4
#include<conio.h>
class time
{
 int hour;
 int minute;
 public:
   void get_time()
   {
    cout<<"enter hour and minute:";
    cin>>hour>>minute;
   }
   void print_time()
   {
    cout<<"\n Time="<<hour<<":"<<minute<<endl;
   }
   void operator++();
   void operator++(int);
   void operator--();
   void operator--(int);
};
void time::operator++()
{
 cout<<"PREFIX++";
 hour=hour+1;
 minute=minute+1;
 while(minute>=60)
 {
  hour=hour+1;
  minute=minute-60;
 }
}
void time::operator++(int)
{
 cout<<"POSTFIX++";
 hour=hour+1;
 minute=minute+1;
 while(minute>=60)
 {
  hour=hour+1;
  minute=minute-60;
 }
}
void time::operator--()
{
 cout<<"PRIFIX--";
 hour=hour-1;
 if(minute>0)
    minute=minute-1;
 else
 {
  hour=hour-1;
  minute=59;
 }
}
void time::operator--(int)
{
 cout<<"POSTFIX--";
 hour=hour-1;
 if(minute>0)
    minute=minute-1;
 else
 {
  hour=hour-1;
  minute=59;
 }
}
void main()
{
 time t1,t2;
 clrscr();
 cout<<"increament time"<<endl;
 t1.get_time();
 t1++;
 t1.print_time();
 ++t1;
 t1.print_time();
 cout<<"decreament time"<<endl;
 t2.get_time();
 t2--;
 t2.print_time();
 --t2;
 t2.print_time();
 getch();
}
