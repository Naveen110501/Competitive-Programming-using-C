#include<iostream>
using namespace std;
class ob
{
	public:
		int sum,a;
		ob()
		{
			sum=0;
		}
		void add()
		{
			while(a!=0)
			{
			a=a/10;
			++sum;
			
		}
		cout<<"the numbers of digits"<<endl;
		cout<<sum<<endl;
	}
};
int main()
{
	ob nav;
	cout<<"enter the digit";
	cin>>nav.a;
	nav.add();
	return 0;
}
