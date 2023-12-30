#include<iostream.h>\\pro5_u4
#include<fstream.h>
#include<conio.h>
void main()
{
 char c,ch[11];
 clrscr();
 ofstream fout("Temp.txt");
 for(int i=0;i<25;i++)
 {
  cin>>c;
  fout.put(c);
 }
 fout.put('\n');
 fout.close();
 ifstream fin("temp.txt");
 c=fin.get();
 cout<<"output of get()="<<c<<endl;
 fin.getline(ch,11);
 cout<<"output of getline()="<<ch;
 fin.close();
 getch();
}
