//include the library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declare a float variable to store the length in centimeters and input its value
float lengthcm=0.0f;
cout<<"Enter the length in centimeters."<<endl;
cin>>lengthcm;
//convert the length into meters
float lengthm= lengthcm/100.0f;
//convert the length into kilometers
float lengthkm= lengthcm/100000.0f;
//display the converted values is the terminal
cout<<"The corresponding length in meters is "<<lengthm<<endl;
cout<<"The corresponding length in kilometers is "<<lengthkm<<endl;
return 0;
} 
 
