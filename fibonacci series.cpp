#include<iostream>
using namespace std;
class fib
{
	
	public:
		int i,a,b,c,n;
		fib()
		{
			a=0;
			b=1;
		}
		void display()
		{
			cout<<"fibonacci series"<<endl;
			for(i=1;i<=n;i++)
			{
				cout<<a<<endl;
				c=a+b;
				a=b;
				b=c;
			}
		}
};
int main()
{
	fib nav;
	cout<<"enter the digit"<<endl;
	cin>>nav.n;
	nav.display();
	return 0;
 } 
