#include<iostream.h>
#include<conio.h>
class test
{
int x;
public:
void my()
{
cin>>x;
}
void display()
{
cout<<x;
}
};
void main()
{
clrscr();
test n,k;
n.my();
k.my();
n.display();
k.display();
}