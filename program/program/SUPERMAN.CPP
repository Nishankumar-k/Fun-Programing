#include<iostream.h>
#include<conio.h>
void main()
{
int a[100];
int i,j,p;
int size;
clrscr();
cout<<"\n enter the number of elements: ";
cin>>size;
for(i=0;i<size;i++)
cin>>a[i];
for(i=0;i<size;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
p=a[j];
a[j]=a[j+1];
a[j+1]=p;
}
}
}
cout<<"\n sorted array   ";
for(i=0;i<size;i++)
cout<<a[i];
}