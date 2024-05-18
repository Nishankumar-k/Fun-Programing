#include<iostream.h>
#include<conio.h>
class test
{
static int x;
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
int test::x;
void main()
{
clrscr();
test n,k;
n.my();
n.display();
k.my();
k.display();
}