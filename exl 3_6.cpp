#include<iostream.h>
void main()
{
	float r,s,c,pi;	
	int k;
	cout<<"请输入圆的半径r和一个整形数k=1或2或3:"<<endl;
	cin>>r>>k;
	pi=3.14159;
	s=pi*r*r;
	c=2*pi*r;
	if(k==1)
		cout<<"圆的面积s="<<s<<endl;
	else
	{
		if(k==2)
			cout<<"圆的周长c="<<c<<endl;
		else
			cout<<"圆的面积s="<<s <<"圆的周长c="<<c<<endl;
	}
}
