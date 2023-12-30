#include<iostream.h>
#include<conio.h>
void main()
{
 int b=5;
 int *p=&b;
 int rb=b;
 int *pb=&rb;
 clrscr();
 cout<<"Address and value of the variable b="<<&b<<"\t"<<b;
 cout<<"\n Address and value of rb="<<&rb<<"\t"<<rb;
 cout<<"\n value and address of pointer p="<<p<<"\t"<<&p;
 cout<<"\n value and address of pointer pb="<<pb<<"\t"<<&pb;
 rb=b+10;
 cout<<"\n value of b using pointer variable="<<*p;
 cout<<"\n value of rb using pointer variable="<<*pb;
 getch();
}