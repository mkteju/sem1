#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
 int n1,ans;
 clrscr();
 printf("Enter num1:");
 scanf("%d",&n1);

 ans=fact(n1);

 printf("Factorial of %d=%d",n1,ans);

 getch();
}
int fact(int n)
{
 if (n==1)
 return 1;
 else
 return(n*fact(n-1));
}