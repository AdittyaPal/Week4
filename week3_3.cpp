//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//declare a variable of float datatype to stote the temperature in fahrenheit and input its value
float tempF=0.0f;
cout<<"Enter the temperature in Fahrenheit."<<endl;
cin>>tempF;
//convert the temperature into Celsius
float tempC=5.0f*(tempF-32.0f)/9.0f;
//display it in the terminal
cout<<"The corresponding temperature in Celsius is "<<tempC<<endl;
return 0;
}
