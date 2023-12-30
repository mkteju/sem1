#include<iostream.h>\\pro7_u3
#include<conio.h>
class matrix
{
 int arr[2][2];
 public:
    void operator +(matrix);
    void operator -(matrix);
    void get_matrix_data();
};
void matrix::get_matrix_data()
{
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<"\n enter["<<i<<"]&["<<j<<"]";
   cin>>arr[i][j];
  }
 }
}
void matrix::operator +(matrix m)
{
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<"\n Addition of element["<<i<<"]["<<j<<"]is"<<arr[i][j]+m.arr[i][j];
  }
 }
}
void matrix::operator -(matrix m)
{
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   cout<<"\n Subtraction of element["<<i<<"]["<<j<<"]is"<<arr[i][j]-m.arr[i][j];
  }
 }
}
void main()
{
 matrix m1,m2;
 clrscr();
 cout<<"\n enter matrix data";
 m1.get_matrix_data();
 cout<<"\n Enter other matrix data";
 m2.get_matrix_data();
 m1+m2;
 m1-m2;
 getch();
}