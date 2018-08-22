//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//declare five float variables to store the marks in five subjects
float sub1=0.0f;
float sub2=0.0f;
float sub3=0.0f;
float sub4=0.0f;
float sub5=0.0f;
//input the marks in five subjects from the user
cout<<"Enter the marks in the first subject."<<endl;
cin>>sub1;
cout<<"Enter the marks in the second subject."<<endl;
cin>>sub2;
cout<<"Enter the marks in the third subject."<<endl;
cin>>sub3;
cout<<"Enter the marks in the fourth subject."<<endl;
cin>>sub4;
cout<<"Enter the marks in the fifth subject."<<endl;
cin>>sub5;
//find the total, average and precentage of marks and display it in the terminal
float total=sub1+sub2+sub3+sub4+sub5;
cout<<"The total marks is "<<total<<endl;
cout<<"The average marks is "<<(total/5.0f)<<endl;
cout<<"The percentage of marks is "<<(total/500.0*100.0)<<"%."<<endl;
return 0;
}

