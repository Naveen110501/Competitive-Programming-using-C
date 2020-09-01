#include<iostream>
using namespace std;
class nat
{
	public:
		int x,c;
		int add(int x)
		{
			if(x>0)
            return(x+(add(x-1)));
            else 
			return 0;
		}
};
int main()
{
	nat nav;
	cout<<"enter the number";
	cin>>nav.x;
	nav.c=nav.add(nav.x);
	cout<<"the sum of natural numbers is "<<endl;
	cout<<nav.c;
	return 0;
}
