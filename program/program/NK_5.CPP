#include<iostream.h>
class nk
{
int x;
public:
void csk()
{
cout<<"without parameter";
}
void csk(int a)
{
cout<<"with integer";
}
void csk(char b)
{
cout<<"with character";
}
};
void main()
{
nk dk;
dk.csk();
dk.csk('5');
dk.csk(5);
}
