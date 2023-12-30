#include<iostream.h>\\pro6_u3
#include<conio.h>
class distance
{
 int feet;
 int inch;
 public:
     distance()
     {
      feet=inch=0;
     }
     distance(int f,int i)
     {
      feet=f;
      inch=i;
     }
     void operator==(distance d)
     {
      int dist1=(feet*12)+inch;
      int dist2=(d.feet*12)+d.inch;
      if(dist1==dist2)
      {
       cout<<"\n Both distance are same";
      }
      else
      {
       cout<<"\n Both distance are not same";
      }
     }
     int operator<(distance d)
     {
      int dist1=(feet*12)+inch;
      int dist2=(d.feet*12)+d.inch;
      if(dist1<dist2)
      {
       return 1;
      }
      else
      {
       return 0;
      }
     }
};
void main()
{
 distance d1(15,45);
 distance d2(12,50);
 clrscr();
 d1==d2;
 if(d1<d2)
 {
  cout<<"\n d1 is less";
 }
 else
 {
  cout<<"\n d2 is less or equal";
 }
 getch();
}