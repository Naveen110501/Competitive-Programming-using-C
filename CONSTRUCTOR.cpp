#include<iostream>
using namespace std;
class details
{
public:
string name,s,i;
int age,j;
long int phonenumber,b,k;
int a;
details()
{
cout<<"enter the details"<<endl;
cout<<"name:"<<endl;
cin>>name;
cout<<"age:"<<endl;
cin>>age;
cout<<"phonenumber:"<<endl;
cin>>phonenumber;
s=name;
a=age;
b=phonenumber;
}
details(string m,int n,long int o)
{
cout<<endl<<"using parameterized constructor"<<endl;
cout<<"name="<<m<<endl;
cout<<"age="<<n<<endl;
cout<<"phone number="<<o<<endl;
}
details(details &temp)
{
i=temp.name;
j=temp.age;
k=temp.phonenumber;
cout<<endl<<"using copy constructor"<<endl;
cout<<"name="<<i<<endl;
cout<<"age="<<j<<endl;
cout<<"phone number="<<k<<endl;
}

void display()
{
cout<<endl<<"using default constructor"<<endl;
cout<<"name="<<s<<endl;
cout<<"age="<<a<<endl;
cout<<"phone number="<<b<<endl;
}
};
int main()
{
details nav;
details nav1(nav.name,nav.age,nav.phonenumber);
details nav2(nav);
nav.display();
return 0;
}

