#include<iostream>
using namespace std;
class nav
{
	public:
		int x,a;
		nav() : a(1) {}
		void operator ++()
		{
			a=a+2;
		}
		void operator--();
		void display()
		{
			cout<<a<<endl;
		}
		
};
void nav::operator--()
{
	a=a-2;
}
int main()
{
	nav cal;
	++cal;
	--cal;
	cal.display();
	return 0;
}
