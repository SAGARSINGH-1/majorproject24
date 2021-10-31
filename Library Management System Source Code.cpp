#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<iomanip.h>
class lib
{
public:
char name[20];
int clas,rollno;
void get()
{cout<<"*******enter the details of the student:"<<endl;
cout<<"enter the name:"<<endl;
gets(name);
cout<<"enter the class:"<<endl;
cin>>clas;
cout<<"enter the rollno:"<<endl;
cin>>rollno;
}
void show()
{
cout<<"********DETAILS ADDED ARE***********:"<<endl;
cout<<name<<endl;
cout<<clas<<endl;
cout<<rollno<<endl;
}
};

 
case 2:
{
lib s;
fstream t;
t.open("navi_arora.txt",ios::binary|ios::out|ios::app|ios::in);
t.seekg(0);
while(t.read((char*)&s,sizeof(lib)))
{
s.show();
}
}
break;
case 3:
{ int a[20];
lib s;
fstream t;
t.open("navi_arora.txt",ios::binary|ios::out,ios::app|ios::in);
t.seekg(0);
cout<<"enter the name you want to search:"<<endl;
for(int i=0;i<=20;i++)
{
cin>>a[i];
while(t.read((char*)&s,sizeof(lib)))
{
 
 
s.show();
}
cout<<"name not found:";
}
}
}
}
