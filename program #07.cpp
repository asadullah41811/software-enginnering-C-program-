//write a program check the grade of the student on based of the marks
#include<iostream>
using namespace std;
 int main()
 {
 	 float marks;
 	 cout<<" Enter the marks of the student ::"<<endl;
 	 cin>>marks;
 	 if ( marks>= 90 && marks<=100)
 	 {
 	 	cout<<"Your grade is A+"<<marks<<endl;
	  }
	  else if ( marks>=80)
{
	cout<<" Your grade is A"<<marks<<endl;
	
}
 else if ( marks>=70)
{
	cout<<" Your grade is B"<<marks<<endl;
	
}
 else if ( marks>=60)
{
	cout<<" Your grade is  C"<<marks<<endl;
	
}
 else if ( marks>=50)
{
	cout<<" Your grade is D"<<marks<<endl;
	
}
else 
{
	cout<<"Your grade is F "<<marks<<endl;
}
return 0;
 }
