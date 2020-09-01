#include<iostream>
using namespace std;
class nav
{
private:
float c;
public:
float m;
int o,p;
int n;
void area(int a,int  b)
{
c=(0.5)*(a*b);
cout<<"area of triangle"<<endl<<c<<endl;
}
void area(float a)
{
c=a*a;
cout<<"area of square"<<endl<<c<<endl;
}
void area(float a,float b)
{
c=a*b*b;
cout<<"area of circle"<<endl<<c<<endl;
}
void area(float a,int b)
{
c=a*(float)b;
cout<<"area of rectangle"<<endl<<c<<endl;
}
void area(int a)
{
c=6*a*a;
cout<<"area of cube"<<endl<<c<<endl;
}
};
int main()
{
int choice;
nav cal;
char choice1;
do
{
cout<<"enter the choice"<<endl;
cout<<"1.area of square"<<endl<<"2.area of rectangle"<<endl<<"3.area of circle"<<endl<<"4.area of triangle"<<endl<<"5.area of cube"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the value"<<endl;
cin>>cal.m;
cal.area(cal.m);break;
case 2:
cout<<"enter the length and breadth"<<endl;
cin>>cal.m>>cal.n;
cal.area(cal.m,cal.n);break;
case 3:
cout<<"enter the radius"<<endl;
cin>>cal.m;
cal.area(3.14f,cal.m);break;
case 4:
cout<<"enter the length and breath"<<endl;
cin>>cal.o>>cal.p;
cal.area(cal.o,cal.p);break;
case 5:
cout<<"enter the radius"<<endl;
cin>>cal.o;
cal.area(cal.o);break;

default:
 cout<<"enter the correct choice"<<endl;break;
}
cout<<"whether continue y/n"<<endl;
cin>>choice1;
}while(choice1=='y'||choice=='Y');
return 0;
}

