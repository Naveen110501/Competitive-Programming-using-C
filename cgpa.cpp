	#include<iostream>
	using namespace std;
	class details
	{
		public:
			string name;
			int roll;
			void get()
			{
				cout<<"enter the name "<<endl;
				cin>>name;
				cout<<"enter the roll number"<<endl;
				cin>>roll;
			}
			void calculate()
			{
				int credit[20],point[20],n,i;
				cout<<"enter the number of subjects"<<endl;
				cin>>n;
				for(i=0;i<n;i++)
				{
					cout<<"enter the credit for subject"<<i+1<<endl;
					cin>>credit[i];
					cout<<"enter the gradepoint for subject"<<i+1<<endl;
					cin>>point[i];	
				}
				int sum=0,add=0;
				float cgpa;
				for(i=0;i<n;i++)
				{
					sum=sum+(credit[i]*point[i]);
					add=add+credit[i];
				}
				cgpa=sum/(float)add;
				cout<<"total point"<<endl<<sum<<endl<<"total credit"<<endl<<add<<endl;
				cout<<"the cgpa is"<<endl;
				cout<<cgpa<<endl;
			}
	};
	int main()
	{
		details nav;
		char op;
		do
		{
		nav.get();
		nav.calculate();
		cout<<"whether continue(y/n)"<<endl;
		cin>>op;
	}while(op=='y'||op=='Y');
		return 0;
	}
	
