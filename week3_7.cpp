//include the required libraries
#include <iostream>
#include <cmath>
using namespace std;
//declare the main function
int main()
{
//input the side of the triangle storing it as a float variable
float side=0.0f;
cout<<"Enter the side of an equilateral triangle."<<endl;
cin>>side;
//find the area
double area=sqrt(3)*pow(side,2)/4.0d;
//display it in the terminal
cout<<"Area of the equilateral triangle is "<<area<<endl;
return 0;
}
