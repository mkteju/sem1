#include<iostream.h>\\pro8_u3
#include<conio.h>
class coord
{
 int x;
 int y;
 public:
    void get_xy()
    {
     cout<<"\n enter x:";
     cin>>x;
     cout<<"\n enter y:";
     cin>>y;
    }
    void operator ++()
    {
     x=x+1;
     y=y+1;
    }
    void operator ++(int)
    {
     x=x+1;
     y=y+1;
    }
    void operator -()
    {
     x=-x;
     y=-y;
    }
    void print_xy()
    {
     cout<<"\n x="<<x<<"\ty="<<y<<endl;
    }
};
void main()
{
 coord c1,c2;
 clrscr();
 c1.get_xy();
 c1++;
 c1.print_xy();
 ++c1;
 c1.print_xy();
 c2.get_xy();
 -c2;
 c2.print_xy();
 getch();
}