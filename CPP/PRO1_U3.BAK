#include<iostream.h>\\pro1_u3
#include<conio.h>
class vehicle
{
 protected:
   int vehicle_no;
   long chasis_no;
 public:
   virtual void print_name();
};
class scooter:public vehicle
{
 private:
   int no_of_wheels;
   char *company;
 public:
   void print_name();
   void get_data();
   void display_data();
};
class car:public vehicle
{
 private:
   long price;
   char *company;
 public:
   void print_name();
   void get_data();
   void display_data();
};
void vehicle::print_name()
{
 cout<<"\n vehicle details";
}
void scooter::print_name()
{
 cout<<"\n\n\t scooter details"<<endl;
}
void car::print_name()
{
 cout<<"\n car details"<<endl;
}
void scooter::get_data()
{
 cout<<"\n enter vehicle no:";
 cin>>vehicle_no;
 cout<<"\n enter chasis no:";
 cin>>chasis_no;
 cout<<"\n enter no of wheels:";
 cin>>no_of_wheels;
 cout<<"\n enter company:";
 cin>>company;
};
void scooter::display_data()
{
 cout<<"\n vehicle no="<<vehicle_no;
 cout<<"\n chasis no="<<chasis_no;
 cout<<"\n no of wheels="<<no_of_wheels;
 cout<<"\n company="<<company;
}
void car::get_data()
{
 cout<<"\n enter vehicle no:";
 cin>>vehicle_no;
 cout<<"\n enter chasis no:";
 cin>>chasis_no;
 cout<<"\n enter price:";
 cin>>price;
 cout<<"\n enter company:";
 cin>>company;
};
void car::display_data()
{
 cout<<"\n vehicle no="<<vehicle_no;
 cout<<"\n chasis no="<<chasis_no;
 cout<<"\n price="<<price;
 cout<<"\n company="<<company;
}
void main()
{
 vehicle *v;
 scooter sc;
 car cr;
 clrscr();
 v=&sc;
 v->print_name();
 sc.get_data();
 sc.display_data();
 v=&cr;
 v->print_name();
 cr.get_data();
 cr.display_data();
 getch();
}