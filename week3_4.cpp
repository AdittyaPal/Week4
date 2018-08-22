//include the library
#include <iostream>
using namespace std;
//declare the main function
int main()
{
//declare an integer variable to store the number of days inputted
int noOfDay=0;
cout<<"Enter the number of days."<<endl;
cin>>noOfDay;
//convert the number of days inputted into years, weeks and months
int noOfYears=noOfDay/365;
int noOfWeeks=(noOfDay%365)/7;
int noOfDays=(noOfDay%365)%7;
//display the results in the terminal
cout<<"The converted time period is "<<noOfYears<<" years, "<<noOfWeeks<<" weeks and "<<noOfDays<<" days."<<'\n';
return 0;
}
