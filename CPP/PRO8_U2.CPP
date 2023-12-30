#include<iostream.h>
#include<conio.h>
class publisher
{
 protected:
    char title[30];
};
class book:public publisher
{
 private:
    int page_no;
 public:
    void get_book_details();
    void display_book_details();
};
class tape:public publisher
{
 private:
    int playing_time;
 public:
     void get_tape_details();
     void display_tape_details();
};
void book::get_book_details()
{
 cout<<"\nenter book title:";
 cin>>title;
 cout<<"\nenter page No:";
 cin>>page_no;
}
void tape::get_tape_details()
{
 cout<<"\nenter tape title:";
 cin>>title;
 cout<<"\nenter playind time:";
 cin>>playing_time;
}
void book::display_book_details()
{
 cout<<"\n BOOK TITLE:"<<title;
 cout<<"\n PAGE NO:"<<page_no;
}
void tape::display_tape_details()
{
 cout<<"\n TAPE TITLE:"<<title;
 cout<<"\n PLAYING TIME:"<<playing_time;
}
void main()
{
 book b;
 tape t;
 clrscr();
 b.get_book_details();
 t.get_tape_details();
 b.display_book_details();
 t.display_tape_details();
 getch();
}