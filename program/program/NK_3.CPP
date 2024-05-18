#include<iostream.h>
#include<conio.h>
class example
{
int x,y;
public:
void myfunction();
void myfunction1()
{
cout<<x<<y;
}
};
void example::myfunction()
{
cin>>x>>y;
}
void main()
{
example a;
a.myfunction();
a.myfunction1();
}












