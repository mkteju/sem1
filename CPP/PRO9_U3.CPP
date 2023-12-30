#include<iostream.h>\\pro9_u3
#include<conio.h>
class paisa
{
 int amount;
 public:
    void setpaisa(int val)
    {
     amount=val;
    }
    void printdata()
    {
     cout<<"\n Amount in paisa:"<<amount;
    }
};
class rupee
{
 int amount;
 public:
    rupee()
    {
     amount=56;
    }
    operator paisa()
    {
     paisa p;
     p.setpaisa(amount*100);
     return p;
    }
};
void main()
{
 rupee r;
 paisa p;
 clrscr();
 p=r;
 p.printdata();
 getch();
}