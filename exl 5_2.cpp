#include<iostream.h>
float fun(int n)
{
	int i,sl=0;
	float s=0.0;
	for(i=1;i<=n;i++)
	{
		sl=sl+i;
		s=s+1.0/sl;
	}
	return s;
}
void main()
{
	int n;
	float s;
	cout<<"Please enter n:"<<endl;
	cin>>n;
	s=fun(n);
	cout<<"1+1/(1+2)+1/(1+2+3)+......+1/(1+2+3+......+n)="<<s<<endl;
}


