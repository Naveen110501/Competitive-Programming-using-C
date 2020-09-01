#include<iostream> .
using namespace std;
class student
{
	public:
		int a,i;
		bool isprime=true;
		void add()
		{
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				isprime=false;
				break;
			}
		}
		if(isprime==true)
		{
		cout<<"the given number is prime number"<<endl;
}
else
{
	cout<<"the given number is not prime number"<<endl;
}
}
};
int main()
{
	student nav;
	cout<<"enter the number"<<endl;
	cin>>nav.a;
	nav.add();
	return 0;
}
