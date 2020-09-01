#include<iostream>
using namespace std;
class cal
{
private :
int p;
float c;
public:
int m;
float n;
double o;
void square(int a);
void square(float a);
void square(double a);

};
void cal::square(int a)
{
p=a*a;
cout<<"square of integer is"<<endl<<p<<endl;
}
void cal::square(float a)
{
c=a*a;
cout<<"square of float is"<<endl<<c<<endl;
}
void cal::square(double a)
{
c=a*a;
cout<<"square of double is"<<endl<<c<<endl;
}

int main()
{
int choice;
cal nav;
char choice1;
do
{
cout<<"enter the choice"<<endl;
cout<<"1.integer"<<endl<<"2.float"<<endl<<"3.double"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the integer value"<<endl;
cin>>nav.m;
nav.square(nav.m);break;
case 2:
cout<<"enter the flaot value"<<endl;
cin>>nav.n;
nav.square(nav.n);break;
case 3:
cout<<"enter the double value"<<endl;
cin>>nav.o;
nav.square(nav.o);break;
default :
cout<<"enter the correct value"<<endl;break;
}
cout<<"whether y/n"<<endl;
cin>>choice1;
}while(choice1=='y'||choice1=='Y');
return 0;
}

