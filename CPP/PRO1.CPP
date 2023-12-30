#include<iostream.h>
#include<conio.h>
#define pi 3.14
float area(float radius);
float area(float l,float b);
int area(int l);
void main()
{
 clrscr();
 float radius,l,b,ar_c,ar_rect;
 int length,ar_s;
 cout<<"Enter the radius of circle:";
 cin>>radius;
 ar_c=area(radius);
 cout<<"Area of circle is:"<<ar_c;

 cout<<"\n Enter the langth and breadth:";
 cin>>l>>b;
 ar_rect=area(l,b);
 cout<<"Area of rectangle is:"<<ar_rect;

 cout<<"\n Entre the langth of square:";
 cin>>length;
 ar_s=area(length);
 cout<<"Area of square is:"<<ar_s;
 getch();
}
 float area(float radius)
 {
  float ans;
  ans=pi*radius*radius;
  return ans;
 }
 float area(float l,float b)
 {
  float ans;
  ans=l*b;
  return ans;
 }
 int area(int l)
 {
  int ans;
  ans=l*l;
  return ans;
 }