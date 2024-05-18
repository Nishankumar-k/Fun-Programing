#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
class product
{
int proid;
int stoid;
float up;
char proname[50],suppname[50];
public:
void viewdata()
{
cout<<"\n"<<proid;
cout<<"\t"<<proname;
cout<<"\t"<<up;
cout<<"\t"<<stoid;
cout<<"\t"<<suppname;
}
int getproid()
{
return proid;
}
};
void main()
{
ifstream fi;
fi.open("stock.dat",ios::in|ios::binary);
int pid;
char ok='n';
ofstream fi1;
fi1.open("temp.dat",ios::out|ios::binary);
product p;
system("cls");
cout<<"\n enter the product id to delete:   ";
cin>>pid;
while(!fi.eof())
{
fi.read((char*)&p,sizeof(p));
if(p.getproid()==pid)
ok='y';
else
fi1.write((char*)&p,sizeof(p));
}
fi.close();
fi1.close();
remove("stock.dat");
rename("temp.dat","stock.dat");
fi.open("stock.dat",ios::in|ios::binary);
if(ok=='y')
{
cout<<"\n the product id:   "<<pid<<"deleted from the file";
}
else
cout<<"\n the product id:   "<<pid<<"   is not in the file  ";
fi.close();
getch();
}


