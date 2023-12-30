#include<iostream.h>\\pro10_u3
#include<conio.h>
class celsius
{
 float cels;
 public:
   celsius()
   {
    cels=0;
   }
   celsius(float val)
   {
    cels=val;
   }
   void get_cels()
   {
    cout<<"\n enter celsius:";
    cin>>cels;
   }
   float ret_cels()
   {
    return cels;
   }
   void display_cels()
   {
    cout<<"\n celsius="<<cels;
   }
};
class fahrenhiet
{
 float fahr;
 public:
   fahrenhiet()
   {
    fahr=0;
   }
   fahrenhiet(celsius c)
   {
    fahr=(((c.ret_cels())*1.8)+32);
   }
   void get_fahr()
   {
    cout<<"\n enter fahrenhiet:";
    cin>>fahr;
   }
   void display_fahr()
   {
    cout<<"\n Fahrenhiet:"<<fahr;
   }
   operator celsius()
   {
    float c;
    c=(fahr-32.0)/1.8;
    return c;
   }
};
void main()
{
 celsius c;
 fahrenhiet f;
 clrscr();
 c.get_cels();
 f=c;
 f.display_fahr();
 f.get_fahr();
 c=f;
 c.display_cels();
 getch();
}