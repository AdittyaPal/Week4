//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//input the base and heights opf the triangle storing them in float variables
float base=0.0f;
float height=0.0f;
cout<<"Enter the base of the triangle."<<endl;
cin>>base;
cout<<"Enter the height of the triangle."<<endl;
cin>>height;
//find the area
double area=0.5d*base*height;
//display it in the terminal
cout<<"the area of the triangle is "<<area<<endl;
return 0;
}
