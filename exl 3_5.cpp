#include<iostream.h>
#include <math.h>
void main()
{
	float a,b,c,s,S;
	cout<<"Please enter the value of a and b and c:"<<endl;
	cin>>a>>b>>c;
if(a<b+c&&b<a+c&&c<a+b)
{
 s=(a+b+c)/2;
	S=sqrt(s*(s-a)*(s-b)*(s-c)); 
 cout<<"���������Ϊ:"<<S<<endl;
}
else
cout<<"�������߲������������"<<endl;
}
