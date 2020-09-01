#include<iostream>
using namespace std;
class nav
{
	public :
		int date,month,year; 
		nav(int d,int m,int y)
		{
			date=d;
			month=m;
			year=y;
        }
		void operator ++()
		{
			++date;
			if(date>31)
			{
				if(date>32)
				{
					cout<<"Invalid date format"<<endl;
				}
				else
				{
				++month;
				date=date%31;
			}
			}
			if(month>12)
			{
				if(month>13)
				{
					cout<<"Invalid month format"<<endl;
				}
				else
				{
				++year;
				month=month%12;
				}
			}
		}
		void operator--()
		{
			--date;
			if(date<1)
			{
				--month;
				date=31-date;
			}
			if(month<1)
			{
				--year;
				month=12-month;
			}
		}
		void display()
		{
			cout<<"date="<<date<<endl;
			cout<<"month="<<month<<endl;
			cout<<"year="<<year<<endl;
		}
};
int main()
{
	int a,b,c,choice;
	cout<<"enter the date,month and year"<<endl;
	cin>>a>>b>>c;
	nav inc(a,b,c);
	cout<<"enter the choice "<<endl<<"1.increment"<<endl<<"2.decrement"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	++inc;
	inc.display();break;
	case 2:
	--inc;
	inc.display();
	break;
	default :	
	cout<<"enter the correct choice"<<endl;
	}
	return 0;
}
