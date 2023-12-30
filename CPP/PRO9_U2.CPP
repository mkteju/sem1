#include<iostream.h>
#include<conio.h>
long get_current_balance();
long get_amount();
float get_roi();

class account
{
 protected:
     char cust_name[30];
     long account_no;
 public:
     char account_type;
     void get_detail();
};
void account::get_detail()
{
 cout<<"Enter coutomer name:";
 cin>>cust_name;
 cout<<"Enter account no:";
 cin>>account_no;
 cout<<"Enter account type(S/C):";
 cin>>account_type;
}
class cur_acc:public account
{
 private:
     double balance;
 public:
     void deposit_money();
     void withdraw_money();
     void compute_interest();
     cur_acc()
     {
      balance=0;
     }
};
class sav_acc:public account
{
 private:
   double balance;
 public:
   void deposit_money();
   void withdraw_money();
   void compute_interest();
   sav_acc()
   {
    balance=0;
   }
};
void cur_acc::deposit_money()
{
 balance=get_current_balance();
 long amount=get_amount();
 balance=balance+amount;
 compute_interest();
}
void cur_acc::withdraw_money()
{
 balance=get_current_balance();
 long amount=get_amount();
 if(balance>amount)
 {
  balance=balance-amount;
  cout<<"\n after withdrawel="<<balance;
 }
 else
 {
  cout<<"\n Insufficient balance";
 }
}
void cur_acc::compute_interest()
{
 float rate_of_interest=get_roi();
 balance=balance+((balance*rate_of_interest)/100);
 cout<<"\n After interest="<<balance;
}
void sav_acc::deposit_money()
{
 balance=get_current_balance();
 long amount=get_amount();
 balance=balance+amount;
 compute_interest();
}
void sav_acc::withdraw_money()
{
 balance=get_current_balance();
 long amount=get_amount();
 if(balance>amount)
 {
  balance=balance-amount;
  cout<<"\n After withdrwel="<<balance;
 }
 else
 {
  cout<<"\n Insufficient balance";
 }
}
void sav_acc::compute_interest()
{
 float rate_of_interest=get_roi();
 balance=balance+((balance*rate_of_interest)/100);
 cout<<"\n After interest="<<balance;
}
long get_current_balance()
{
 long balance;
 cout<<"Enter current balance";
 cin>>balance;
 return balance;
}
long get_amount()
{
 long amount;
 cout<<"Enter amount";
 cin>>amount;
 return amount;
}
float get_roi()
{
 float roi;
 cout<<"Enter rate of interest";
 cin>>roi;
 return roi;
}
void main()
{
 account acc;
 int choice;
 sav_acc sa;
 cur_acc cr;
 clrscr();
 acc.get_detail();
 cout<<"\n select the below options:";
 cout<<"\n1.Deposit amount:";
 cout<<"\n2.withdraw amount:";
 cout<<"\n Enter your choice:";
 cin>>choice;
 if(choice==1)
 {
  if(acc.account_type=='S')
  {
   sa.deposit_money();
  }
  else if(acc.account_type=='C')
  {
   cr.deposit_money();
  }
  else
  {
   cout<<"\n Invalid account type";
  }
 }
 else if(choice==2)
 {
  if(acc.account_type=='S')
  {
   sa.withdraw_money();
  }
  else if(acc.account_type=='C')
  {
   cr.withdraw_money();
  }
  else
  {
   cout<<"\n Invalid account type";
  }
 }
 else
 {
  cout<<"\n Invalid choice";
 }

 getch();
}
