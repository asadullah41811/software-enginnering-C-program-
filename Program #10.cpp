#include<iostream>
using namespace std;
 int main()
 {
 	int unit,bill;
 	 cout<<"Enter the electricity bill consumption in units"<<endl;
 	 cin>>unit;
 	 if ( unit>0 && unit<100)
 	 {
 	 	bill = unit*15; 
	  }
	  else if  ( unit>100 && unit<200)
	  {
	  	bill=( ( 100*15)+ ( unit-100)*25);
	  }else if( unit>200 && unit<300)
	  {
	  	bill= ((100*15) +  (100*25) +(unit-200 )*35);
	  	
	  }
	  else 
	  {
	  	bill= ((100*15) +  (100*25) +(100*35) +(unit-300)*45);
	  	
	  }

	  
	  
	  cout<<"Your fina bill is :"<<bill<<endl;
	 return 0;
 }
