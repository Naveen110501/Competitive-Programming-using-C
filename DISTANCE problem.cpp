#include<iostream>
using namespace std;
class test
{
public:
float kilo,mile;
void convertkilo()
{
kilo=1.6*mile;
}
void display()
{
cout<<"conversion of miles to kilometer"<<endl;
cout<<kilo<<endl;
}
};
int main()
{
test  nav;
cout<<"enter the miles"<<endl;
cin>>nav.mile;
nav.convertkilo();
nav.display();
return 0;
}


