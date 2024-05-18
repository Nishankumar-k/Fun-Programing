#include<iostream.h>
class box
{
int boxnumber;
float side,area;
void execarea()
{
area=side*side;
}
public:
void getbox()
{
cin>>boxnumber>>side;
execarea();
}
void showbox()
{
cout<<boxnumber<<side<<area;
}
};
void main()
{
box a;
a.getbox();
a.showbox();
}