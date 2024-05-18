#include<iostream.h>
#include<conio.h>
void main()
{
int a[100];
int i,j,p;
int small,size;
cout<<"\n enter the number of element:     ";
cin>>size;
for(i=0;i<size;i++)
cin>>a[i];
for(i=0;i<size-1;i++)
{
small=a[i];
p=i;
for(j=i+1;j<size;j++)
{
if(a[j]<small)
{
small=a[j];
p=j;
}
}
a[p]=a[i];
a[i]=small;
}
cout<<"\n sorted array: ";
for(i=0;i<size;i++)
cout<<"\n"<<a[i];
}