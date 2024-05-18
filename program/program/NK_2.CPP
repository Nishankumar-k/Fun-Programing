#include<iostream.h>
#include<conio.h>
class metropolis
{
int mcode;
char mname[30];
float density;
long int mpop;
float area,popdens;
void calden()
{
popdens=area*area*100;
density=popdens/area;
}
public:
void enter()
{
cout<<"enter the code: ";
cin>>mcode;
cout<<"enter the name: ";
cin>>mname;
cout<<"enter the population: ";
cin>>mpop;
cout<<"enter the area: ";
cin>>area;
calden();
}
void viewall()
{
cout<<mcode<<mname<<mpop<<area;
if(density>12000)
{
cout<<"highly populated area";
}
}
};
void main()
{
clrscr();
metropolis NK;
NK.enter();
NK.viewall();
}