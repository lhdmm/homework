 #include<iostream.h> 
 void main() 
 {  
 	int a,b,c; 
 	c=10; 
 	for (a=1;a<=99;a++) 
 	{ 
 		if (a==c) 
 			c*=10; 
 		b=a*a; 
 		if(b%c==a) 
 		cout<<"a="<<a<<",b="<<b<<endl; 
	} 
 } 
