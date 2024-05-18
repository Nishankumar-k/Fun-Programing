#include<iostream.h>
#include<conio.h>
class test
{
int m;
public:
void accept()
{
cin>>m;
}
void disp(test m1)
{
m1.m=50;
cout<<m1.m;
}
void disp()
{
cout<<m;
}
};
void main()
{
test x;
x.accept();
x.disp();
x.disp(x);
x.disp();
}

