#include<iostream.h>
#include<conio.h>
class student
{
int admno;
char sname[20];
float eng,math,science;
float total;
void ctotal()
{
total=eng+math+science;
}
public:
void takedata()
{
cout<<"enter the admission no. ";
cin>>admno;
cout<<"enter the name: ";
cin>>sname;
cout<<"the marks: ";
cin>>eng>>math>>science;
ctotal();
}
void showdata()
{
cout<<"admision no: "<<admno;
cout<<"name: "<<sname;
cout<<"marks: "<<eng<<math<<science;
cout<<"total: "<<total;
}
};
void main()
{
clrscr();
student s;
s.takedata();
s.showdata();
}