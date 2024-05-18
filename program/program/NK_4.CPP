#include<iostream.h>
class x
{
int a[5];
char name[30];
public:
void enter()
{
for(int i=0;i<5;i++)
cin>>a[i];
}
void out()
{
for(int i=0;i<5;i++)
cout<<a[i];
}
};
void main()
{
x n;
n.enter();
n.out();
}