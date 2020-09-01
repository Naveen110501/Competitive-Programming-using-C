#include<iostream>
using namespace std;
class cal
{
public:
int a,b,c,d,m,n;
void add()
{
m=a+c;
n=b+d;
cout<<"after addition"<<endl<<m<<"+i"<<n<<endl;
}
void sub()
{
m=a-c;
n=b-d;
cout<<"after subraction"<<endl<<m<<"+i"<<n<<endl;
}
void mul()
{
m=((a*c)-(b*d));
n=((a*d)+(b*c));
cout<<"after multiplication"<<endl<<m<<"+i"<<n<<endl;
}
};
int main()
{
int choice;
char choice1;
cal nav;
cout<<"enter the real and imaginary part"<<endl;
cin>>nav.a>>nav.b;
cout<<"enter the real and imaginary part"<<endl;
cin>>nav.c>>nav.d;
A:
cout<<"enter the choice"<<endl<<"1.addition"<<endl<<"2.subraction"<<endl<<"3.multiplication"<<endl;
cin>>choice;
switch(choice)
{
case 1:nav.add();break;
case 2:nav.sub();break;
case 3:nav.mul();break;
default:
cout<<"enter the correct choice"<<endl;
}
cout<<"whether continue y/n";
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
goto A;
}
}


