#include<iostream>
using namespace std; 
class add
{
	public:
		int a,b;
		void sum()
		{
			cout<<a+b;
		}
};
int main()
{
	add nav;
	nav.a=10;
	nav.b=20;
	nav.sum();
	return 0;
}
