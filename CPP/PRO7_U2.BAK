#include<iostream.h>
#include<conio.h>
class scheme
{
 protected:
   int scheme_id;
   char scheme_name[30];
   int call_rate;
   int message_rate;
 public:
   void get_scheme_data();
   scheme()
   {
    scheme_id=0;
    scheme_name[30]='10';
    call_rate=0;
    message_rate=0;
   }
};
class customer:public scheme
{
 private:
    int cust_id;
    char cust_name[30];
    long int mob_num;
    int bill;
 public:
    void get_cust_data();
    void read_info();
    void show_bill();
    customer()
    {
     cust_id=0;
     cust_name[30]='10';
     mob_num=0;
     bill=0;
    }
};
void scheme::get_scheme_data()
{
 cout<<"enter scheme id:";
 cin>>scheme_id;
 cout<<"enter scheme name:";
 cin>>scheme_name;
 cout<<"enter outgoing rate:";
 cin>>call_rate;
 cout<<"enter message rate:";
 cin>>message_rate;
}
void customer::get_cust_data()
{
 cout<<"enter customer id:";
 cin>>cust_id;
 cout<<"enter customer name:";
 cin>>cust_name;
 cout<<"enter moblie number:";
 cin>>mob_num;
}
void customer::read_info()
{
 int total_calls,total_msg;
 cout<<"enter total calls:";
 cin>>total_calls;
 cout<<"enter total message:";
 cin>>total_msg;
 bill=(total_calls*call_rate)+(total_msg*message_rate);
}
void customer::show_bill()
{
 cout<<"customer name:"<<cust_name;
 cout<<"\n customer mobile number:"<<mob_num;
 cout<<"\n bill:"<<bill<<endl;
}
void main()
{
 int choice;
 customer c;
 clrscr();
 cout<<"\n select from below options";
 cout<<"\n 1.give sheme details";
 cout<<"\n 2.give customer details";
 cout<<"\n 3.give call and msg info";
 cout<<"\n 4.show bill";
 cout<<"\n 5.exit";
 do
 {
  cout<<"\n enter your choice:";
  cin>>choice;
  switch(choice)
  {
   case 1:
     c.get_scheme_data();
     break;
   case 2:
     c.get_cust_data();
     break;
   case 3:
     c.read_info();
     break;
   case 4:
     c.show_bill();
     break;
   case 5:

   default:
	cout<<"\n invalid choice";
	break;
   }
  }while(choice!=5);
  getch();
}