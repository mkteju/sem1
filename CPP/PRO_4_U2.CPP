#include<iostream.h>
#include<conio.h>
class calender
{
 int day,month,year;

 public:
 calender()
 {
  day=month=year=0;
 }
 calender(int d,int m,int y)
 {
  day=d;
  month=m;
  year=y;
 }
 ~calender()
 {
  day=month=year=0;
 }
 void display();
 void add_day(int);
};

void calender::add_day(int d)
{
 day=day+d;
 if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10
   || month==12)
   {
    if(day>31)
    {
     month++;
     day=day-31;
     if(month>12)
     {
      month=1;
      year++;
     }
    }
   }
 else if(month==4 || month==6 || month==9 || month==11)
 {
  if(day>30)
  {
   day=day-30;
   month++;
  }
 }
 else
 {
 if(day>28)
 {
  if(year/4==0)
  {
   day=day-29;
  }
  else
  {
   day=day-28;
  }
  month++;
 }
 }
}
void calender::display()
{
 cout<<day<<"/"<<month<<"/"<<year<<endl;
}
void main()
{
 calender c(12,2,2014);
 clrscr();
 c.display();
 c.add_day(5);
 c.display();
 getch();
}