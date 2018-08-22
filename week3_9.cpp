//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//declare three variables to store the principal, rate and time when inputted
float principal=0.0f;
float rate=0.0f;
float time=0.0f;
cout<<"Enter the principal amount deposited."<<endl;
cin>>principal;
cout<<"Enter the rate of interest per annum."<<endl;
cin>>rate;
cout<<"Enter the time for which deposited."<<endl;
cin>>time;
//calculate the simple inetrest
double simpleInterest=principal*rate*time/100.0;
//display the simple interest earned in the terminal
cout<<"The amount of interest earned is Rs "<<simpleInterest<<endl;
return 0;
}
