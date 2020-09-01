#include<iostream>
using namespace std;
class ob
{
	public:
		int sum,b,a,m;
		ob()
		{
			sum=0;
		}
		void add()
		{
			m=b;
			while(b!=0)
			{
			a=b%10;
			sum=sum+(a*a*a);
			b=b/10;
			
		}
		if(sum==m)
		{
			cout<<"the given number is armstrong number"<<endl;
		}
		else
		{
 			cout<<"the given number is not armstrong number"<<endl;
		}
		
	}
};
int main()
{
	ob nav;
	cout<<"enter the digit";
	cin>>nav.b;
	nav.add();
	return 0;
}
