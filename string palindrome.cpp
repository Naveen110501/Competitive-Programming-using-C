#include<iostream>
#include<string.h>
using namespace std;
class palin
{
	public:
	 char s1[20],s2[20];
	 int len,flag=0,i,j;
	 void stringcopy()
	 {
	 	cout<<"enter the string";
	 	cin>>s1;
	 	len=strlen(s1)-1;
	 	for(i=len,j=0;i>=0;i--,j++)
	 	{
	 		s2[j]=s1[i];
		 }
		 
		s2[j]='\0';
	 }
	 void result()
	 {
	 	if(strcmp(s1,s2))
	 	flag=1;
	 	if(flag==1)
	 	cout<<"the given string is not palindrome"<<endl;
	 	else
	 	cout<<"the given string is palindrome"<<endl;
	 }
};
int main()
{
	palin nav;
	nav.stringcopy();
	nav.result();
	return 0;
	
}
