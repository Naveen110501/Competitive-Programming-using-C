#include<iostream>
using namespace std;
class student
{
	public:
		int accountnumber,balance,amount;
		string accountname;
		void get()
		{
			cout<<"enter the account number"<<endl;
			cin>>accountnumber;
			cout<<"enter the account name"<<endl;
			cin>>accountname;
			cout<<"enter the balance"<<endl;
			cin>>balance;
		}
		void display()
		{
			cout<<"account name"<<endl<<accountname<<endl<<"account number"<<endl<<accountnumber<<endl<<"balance"<<endl<<balance<<endl;
		}
		void deposit()
		{
			cout<<"enter the amount to be deposited"<<endl;
			cin>>amount;
			balance=balance+amount;
			cout<<"Amount deposited successfully"<<endl;
		}
		void withdraw()
		{
			cout<<"enter the amount to be withdraw"<<endl;
			cin>>amount;
			if(amount<=balance)
			{
				balance=balance-amount;
				cout<<"Amount withdraw successfully";
			}
			else
			{
				cout<<"Insufficient amount"<<endl;
			}
		}
};

 int main()
{
	int choice;
	char op;
student nav;
nav.get();
do
{
cout<<"enter the choice"<<endl<<"1.To deposit"<<endl<<"2.To withdraw"<<endl<<"3.to display output"<<endl;
cin>>choice;
switch(choice)
{
	case 1:nav.deposit();break;
		case 2:nav.withdraw();break;
		case 3:nav.display();
		default :
			cout<<"enter the correct choice"<<endl;
	}
cout<<"whether continue(y/n)"<<endl;
		cin>>op;
	}while(op=='y'||op=='Y');
		return 0;

}
