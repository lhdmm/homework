#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x>=1000)
	cout<<"这个数大于1000"<<endl;
	else
	{
		if(x>=100)
			cout<<"这个数在100~999之间"<<endl;
		else
		{
			if(x>=10)
				cout<<"这个数在10~99之间"<<endl;
			else
				cout<<"这个数小于10"<<endl;
		}
	}
}
