//write a program to find the leap or not leap year.//
#include<iostream>
using namespace std;
 int main()
 {
 	 int year;
 	 cout<<"Enter the  year::"<<endl;
 	 cin>>year;
 	 if ( year%4==0 || year % 400==0)
 	 {
 	 	cout<<"Year is the leap year:"<<endl;
 	 	
	  }
	
	   else 
	   {
	   	cout<<" Year is not the leap year"<<endl;
	   }
 	 return 0;
 }

