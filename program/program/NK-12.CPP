#include<iostream.h>
#include<conio.h>
class test
{
int testcode,nocandidate;
int centerreqd;
char description[20];
void calcntr()
{
centerreqd=(nocandidate/100+1);
}
public:
void schedule()
{
cout<<"enter the test code : ";
cin>>testcode;
cout<<"enter the description of the test : ";
cin>>description;
cout<<"enter the number of candidate : ";
cin>>nocandidate;
calcntr();
}
void disptest()
{
cout<<"\n test code: "<<testcode;
cout<<"\n description of the test: "<<description;
cout<<"\n candidate: "<<nocandidate;
cout<<"\n the number of center required: "<<centerreqd;
}
};
void main()
{
clrscr();
test t;
t.schedule();
t.disptest();
}