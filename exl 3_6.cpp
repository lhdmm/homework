#include<iostream.h>
void main()
{
	float r,s,c,pi;	
	int k;
	cout<<"������Բ�İ뾶r��һ��������k=1��2��3:"<<endl;
	cin>>r>>k;
	pi=3.14159;
	s=pi*r*r;
	c=2*pi*r;
	if(k==1)
		cout<<"Բ�����s="<<s<<endl;
	else
	{
		if(k==2)
			cout<<"Բ���ܳ�c="<<c<<endl;
		else
			cout<<"Բ�����s="<<s <<"Բ���ܳ�c="<<c<<endl;
	}
}
