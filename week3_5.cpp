//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//input the two angles storing them in float variables
float angle1=0.0f;
float angle2=0.0f;
cout<<"Enter the first angle of a triangle."<<endl;
cin>>angle1;
cout<<"Enter the second angle of the triangle."<<endl;
cin>>angle2;
//find the third angle
float angle3= 180.0f-(angle1+angle2);
//display it in the terminal
cout<<"The third angle of the triangle is "<<angle3<<endl;
return 0;
}

