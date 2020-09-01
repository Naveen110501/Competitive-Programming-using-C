#include<iostream>
using namespace std;
class cal
{
public:
int a,b,c;
void add()
{
c=a+b;
cout<<"after addition"<<endl<<c<<endl;
}
void sub()
{
c=a-b;
cout<<"after subraction"<<endl<<c<<endl;
}
void mul()
{
c=a*b;
cout<<"after multiplicatuion"<<endl<<c<<endl;
}
void div()
{
c=a/b;
cout<<"after division"<<endl<<c<<endl;
}
};
int main()
{
int choice;
char choice1;
cal nav;
cout<<"enter the numbers of a and b"<<endl;
cin>>nav.a;
cin>>nav.b;
A:
cout<<"enter the choice"<<endl<<" 1.addition"<<endl<<"2.subraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl;
cin>>choice;
switch(choice)
{
case 1:nav.add();break;
case 2:nav.sub();break;
case 3:nav.mul();break;
case 4:nav.div();break;
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


