 #include<iostream.h> 
 void main() 
 { 
    int year,sum=0,leap; 
    for(year=2000;year<=3000;year++) 
    {   	    
 	 if((year%4==0&&year%100!=0)||(year%400==0))
 		 leap=1; 
	 else 
		 leap=0;
 		if(leap) 
         { cout<<"\t"<<year;	 
		sum++;} 
	    if(sum%10==0) 
 		 cout<<endl; 
    } 
 	 cout<<endl<<"sum="<<sum; 
 
 
 } 
