#include<iostream.h>
#include<conio.h>
void main()
{
float a[100];
float i,p,j;
float size,small;
clrscr();
cout<<"\nenter the number of elements: ";
cin>>size;
for(i=0;i<size;i++)
cin>>a[i];
for(i=1;i<size;i++)
{
p=a[i];
j=i-1;
while(j>=0&&a[j]>p)
{
a[j+1]=a[j];
j--;
}
a[j+1]=p;
}
cout<<"\n sorted array    ";
for(i=0;i<size;i++)
cout<<"\n"<<a[i];
}
