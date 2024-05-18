#include<iostream.h>
#include<conio.h>
class batman
{
int bcode;
char bname[20];
int batavg;
int innings, notout, runs;
void calcavg()
{
batavg=runs/(innings-notout);
}
public:
void readdata()
{
cout<<"enter the code: ";
cin>>bcode;
cout<<"enter the name: ";
cin>>bname;
cout<<"enter the runs: ";
cin>>runs;
cout<<"enter the innings & notouts: ";
cin>>innings;
cin>>notout;
calcavg();
}
void displaydata()
{
cout<<"\n code= "<<bcode;
cout<<"\n name= "<<bname;
cout<<"\n runs= "<<runs;
cout<<"\n innings= "<<innings;
cout<<"\n notouts= "<<notout;
cout<<"\n  average = "<<batavg;
}
};
void main()
{
clrscr();
batman bm;
bm.readdata();
bm.displaydata();
}