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
			sum=sum+(a%10);
			a=a/10;
		}
		cout<<"sum of digits"<<endl;
		cout<<sum;
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

