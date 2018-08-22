//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//declare a variable of float datatype to stote the temperature in celsius and input its value
float tempC=0.0f;
cout<<"Enter the temperature in Celsius."<<endl;
cin>>tempC;
//convert the temperature into Fahrenheit
float tempF=9.0f/5.0f*tempC+32.0f;
//display it in the terminal
cout<<"The corresponding temperature in Fahrenheit is "<<tempF<<endl;
return 0;
}
