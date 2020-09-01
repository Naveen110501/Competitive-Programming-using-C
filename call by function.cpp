#include<iostream>
using namespace std;
void value(int ,int);
void ptr(int *,int *);
void ref(int &,int &);
int main()
{
	int a,b,choice;
	char choice1;
	do
	{
	cout<<"enter the choice"<<endl;
	cout<<"1.call by value"<<endl<<"2.call by pointer"<<endl<<"3.call by reference"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"enter the values of a and b"<<endl;
			cin>>a>>b;
			cout<<"before pass"<<endl;
			cout<<a<<endl<<b<<endl;
			value(a,b);
			cout<<"after pass"<<endl;
			cout<<a<<endl<<b<<endl;break;
			case 2:
			cout<<"enter the values of a and b"<<endl;
			cin>>a>>b;
			cout<<"before pass"<<endl;
			cout<<a<<endl<<b<<endl;
			ptr(&a,&b);
			cout<<"after pass"<<endl;
			cout<<a<<endl<<b<<endl;break;
			case 3:
			cout<<"enter the values of a and b"<<endl;
			cin>>a>>b;
			cout<<"before pass"<<endl;
			cout<<a<<endl<<b<<endl;
			ref(a,b);
			cout<<"after pass"<<endl;
			cout<<a<<endl<<b<<endl;break;
			default:
				cout<<"enter the correct choice"<<endl;
	}
	cout<<"whether continue"<<endl;
	cin>>choice1;
}while(choice1=='y'||choice1=='Y');
	return 0;
}
void value(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
cout<<"on pass"<<endl;
cout<<x<<endl<<y<<endl;	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       	
}
void ptr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	cout<<"on pass"<<endl;
cout<<*x<<endl<<*y<<endl;	
}
void ref(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
cout<<"on pass"<<endl;
cout<<x<<endl<<y<<endl;	 
}
