#include<iostream.h>
void main()
{
	int a,b;
	cout<<"Please enter the value of a and b:"<<endl;
	cin>>a>>b;
	if(a%b==0)
	{
		cout<<"a/b="<<a/b<<endl;
	}
	else
	{
		cout<<"a/b="<<a/b <<","<<"a%b="<<a%b<<endl;
	}
}


