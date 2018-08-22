//include the required libraries
#include <iostream>
#include <cmath>
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
cout<<"Enter the conversion period in years."<<endl;
cin>>time;
//calculate the compound inetrest
double compoundInterest=principal*(pow(1+rate/100.0,time)-1);
//display the compound interest earned in the terminal
cout<<"The compound interest earned is Rs "<<compoundInterest<<endl;
return 0;
}

