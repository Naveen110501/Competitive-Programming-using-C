#include<iostream>
using namespace std;
class cal
{
private:
int a,b,sum1,sum2;
public:
int o,p;

void add(int x,int y)
{
a=x;
b=y;
}
void add(cal temp)
{
sum1=a+temp.o;
sum2=b+temp.p;
cout<<"after addition"<<endl<<sum1<<endl<<sum2<<endl;
}
};
int main()
{
int m,n;
cal nav1;
cout<<"enter the two values"<<endl;
cin>>m>>n;
cout<<"enter the two values"<<endl;
cin>>nav1.o>>nav1.p;
nav1.add(m,n);
nav1.add(nav1);
return 0;
}


