#include<iostream.h>\\pro10_u4
#include<conio.h>
#include<fstream.h>
void main()
{
 int num[10],max,i,f_num;
 clrscr();
 ofstream fout("num.txt");
 for(i=0;i<10;i++)
 {
  cin>>num[i];
  fout<<num[i];
  fout.put('\n');
 }
 fout.close();
 ifstream fin("num.txt");
 fin>>max;
 for(i=1;i<10;i++)
 {
  fin>>f_num;
  if(f_num>max)
  {
   max=f_num;
  }
 }
 fin.close();
 cout<<"maximum number is:"<<max;
 getch();
}