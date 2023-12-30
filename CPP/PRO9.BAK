#include<iostream.h>
#include<conio.h>
class election
{
 int count[5],spoiltballots,vote;
 char choice;
 public:
       void initialise();
       void readvote();
       void display();
};
void election::initialise()
{
 spoiltballots=0;
 for(int i=0;i<5;i++)
 {
  count[i]=0;
 }
}
void election::readvote()
{
 do
 {
  cout<<"Enter candidate number(1 to 5)";
  cin>>vote;
  if(vote>=1 && vote<=5)
  {
   count[vote-1]++;
  }
  else
  {
   spoiltballots++;
  }
  cout<<"Do you want to vote again(Y/N)?";
  cin>>choice;
 }
 while(choice!='N');
}
void election::display()
{
 for(int i=0;i<5;i++)
 {
  cout<<"\n Total votes for candidate"<<i+1<<"is"<<count[i];
 }
 cout<<"\n Total spoiltballots:"<<spoiltballots;
}
void main()
{
 election e;
 clrscr();
 e.initialise();
 e.readvote();
 e.display();
 getch();
}