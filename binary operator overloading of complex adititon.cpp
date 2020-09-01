#include<iostream>
using namespace std;
class complex
{
	public:
		float real,imaginary;
complex(float m,float n)
	{
		real=m;
		imaginary=n;
	}
	complex()
	{
		
	}
	complex operator +(complex &a)
	{
		complex c3;
		c3.real=real+a.real;
		c3.imaginary=imaginary+a.imaginary;
		return c3;
	}
	
	complex operator -(complex &a)
	{
		complex c3;
		c3.real=real-a.real;
		c3.imaginary=imaginary-a.imaginary;
		return c3;
	}
	complex operator *(complex &a)
	{
		complex c3;
		c3.real=(real*a.real)-(imaginary*a.imaginary);
		c3.imaginary=(a.real*imaginary)+(a.imaginary*real);
		return c3;
	}
	complex operator /(complex &a)
	{
		complex c3;
		c3.real=((real*a.real)+(imaginary*a.imaginary))/((a.real*a.real)+(a.imaginary*a.imaginary));
		c3.imaginary=((a.real*imaginary)-(a.imaginary*real))/((a.real*a.real)+(a.imaginary*a.imaginary));;
		return c3;
	}
	void display()
	{
	 if(imaginary<0)
	 {
	 	cout<<real<<imaginary<<"i"<<endl;
	 }
	 else
	 {
	 	cout<<real<<"+i"<<imaginary<<endl;
	 }
	}
};
int main()
{
	float b,c,d,e;
	int choice;
	char choice1;
	cout<<"enter real and imaginary part"<<endl;
	cin>>b>>c;
	cout<<"enter real and imaginary part"<<endl;
	cin>>d>>e;
	complex c1(b,c);
	complex c2(d,e);
	complex c3;
	do
	{
	cout<<"enter the choice"<<endl<<"1.addition"<<endl<<"2.substraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	c3=c1+c2;
	cout<<"after addition"<<endl;
	c3.display();break;
	case 2:
	c3=c1-c2;
	cout<<"after substraction"<<endl;
	c3.display();break;
	case 3:
	c3=c1*c2;
	cout<<"after multiplication"<<endl;
	c3.display();break;
	case 4:
	c3=c1/c2;
	cout<<"after division"<<endl;
	c3.display();break;
	default :
		cout<<"enter the correct choice"<<endl;break;
}
cout<<"whether continue (y/n)"<<endl;
cin>>choice1;
}while(choice1=='y'||choice1=='Y');
	return 0;
}
