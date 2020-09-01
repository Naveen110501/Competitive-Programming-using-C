#include<iostream>
using namespace std;
class palin
{
	public:
		int a,b,n,m;
		palin()
		{
			b=0;
		}
		
		
		void manipul()
		{
		
			m=a;
		
			while(a!=0)
			{
				n=a%10;
				b=b*10+n;
				a=a/10;
				
			}

		}
		void display();
};


void palin::display()
{
	if(b==m)
	cout<<"the entered number is palindrome";

	else
	cout<<"the given is not a palindrome";
}


int main()
{
	palin nav;
	cout<<"enter the number";
	cin>>nav.a;
	nav.manipul();
	nav.display();
	return 0;
}
