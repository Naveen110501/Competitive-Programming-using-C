#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,add;
	cout<<"enter the coefficient of a,b and c"<<endl;
	cin>>a>>b>>c;
	add=(b*b)-(4*a*c);
	
	if(add>0)
	{
		x1=(-b+sqrt(add))/(2*a);
		x2=(-b-sqrt(add))/(2*a);
		cout<<"the roots are real and different";
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else if(add==0)
	{
		x1=-b/(2*a);
		cout<<"the roots are real and equal";
		cout<<"x1="<<x1<<endl;
	}
	else
	{
		add=add*-1;
		x1=(-b)/(2*a);
		x2=sqrt(add)/(2*a);
		cout<<endl;
		cout<<"the roots are complex and different"<<endl;
		cout<<x1<<"\t"<<"+i"<<"\t"<<x2<<endl;
		cout<<x1<<"\t"<<"-i"<<"\t"<<x2<<endl;
	}
	return 0;
}
