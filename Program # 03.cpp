// write a program whether check the three largests number  
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout<<"Enter the  three number:"<<endl;
	cin>>num1>>num2>>num3;
	if( num1>=num2 && num1>= num3)
	{
		cout<<" The largest number is :"<<num1;
	}
	else if (num2>=num1 && num2>= num3) 
	{ 
	cout<<"The largest number is :" <<num2;
	
	}
	else 
	{
		cout<<" The largest number is :" <<num3;
		
	}
	return 0;
}

	

