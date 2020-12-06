#include <iostream>

using namespace std;
#include "LabInfo.h"
#include "largestNum.h"
#include "numBetween1-100.h"
#include "areaOfACircle.h"
#include "areaOfARectangle.h"
#include "tempHumidityAlarm.h"
#include "evenNumFrom0_1000.h"
#include "oddNumbersBetween2intergers.h"
#include "randomNum.h"
#include "printNum5to9.h"
#include "Q15_finished3ways.h"
int main()
{
//Q1 Create a function called LabInfo
LabInfo();

    //Q2 Create a function in a file that can take in two numbers and return the Largest

    largestNum();

   //Q3 function that can check the user has input a number between 1 and 100
     numBetween1_100();

{  //Q4 asking a question and getting an answer
    int answer;
    cout<<endl<<endl;
    cout<<"Q4 What number did Diego Maradona wear between 1 and 11?"<<endl;
    cin>>answer;
    switch(answer){
case 1:
    cout<<"OH you don't watch Football he never played in goal!"<<endl;
    break;
case 2:
case 3:
case 4:
case 5:

    cout<<"OH you don't watch Football he wasn't a defender!"<<endl;
    break;
case 6:
case 7:
case 8:
case 11:
    cout<<"OH you don't watch Football he wasn't a midfielder!"<<endl;
   break;
case 9:
    cout <<"You are getting close he was a Striker but you have the wrong number"<<endl;
    break;
case 10:
    cout<<"Jimmy Magee was right... Maradona was Different Class!!..And You Are Right!!"<<endl;
    break;
default:
    cout<<"Read the question again, between 1 and 11"<<endl;
    cout<<endl;
    }cout<<endl<<endl;
    //Q5 take in the radius value and calculate the area of a circle
    areaOfACircle();

    //Q6Take in values and calculate the area of a rectangle
    areaOfARectangle();
    //Q7 Function that can take in two values  temperature and humidity and prints an alarm message if temperature >= 95 or if the humidity >=90
    tempHumidityAlarm();
}
{   //Q8 test the area of a Circle for a range of values from 0 to 120 meters for the radius,in 1 meter steps



cout<<"Q8 All the areas of the 120 Circles in 1 meter steps"<<endl;
float PI=3.14159,radius,area;

    for (  radius= 0; radius< 121 ;++radius ){
area=PI*radius*radius;
cout<<radius<<" meter radius, the calculated area of the circle is : "<<area<<endl<<endl;}

}
{ //Q9 converting Celsius to Fahrenheit and Fahrenheit to Celsius
    cout<<"Q9 converting Celsius to Fahrenheit and Fahrenheit to Celsius"<<endl;
    float Celsius    = 0.0;
    float Fahrenheit = 0.0;
    int x;

    cout<<"Enter 1 if you want Celsius to Fahrenheit conversion : "<<endl;
    cout<<"Enter 2 if you want Fahrenheit to Celsius conversion : "<<endl;
    cin >>x;
    switch (x){
    case 1:
    {
        cout<<"enter your Celsius Temperature : " ;
    cin>> Celsius;
    cout<<endl;

    Fahrenheit= 32 +(Celsius*180.0/100.0);
    cout<<"Your Temperature in Fahrenheit is :"<<Fahrenheit<<endl<<endl;
cout<<endl;
 }
 break;
    case 2:
        {
            cout<<"enter your Fahrenheit Temperature : " ;
            cin>>Fahrenheit;
            cout<<endl;

            Celsius=(Fahrenheit - 32)*100.0/180.0;
            cout<<"Your Temperature in Celsius is :"<<Celsius<<endl<<endl;
            cout<<endl;}


        break;
    default:
        cout<<"Please enter option 1 or 2 :"<<endl;

        }



}//Q10 Write a function to find all the even numbers from 0 to 1000 and print them
evenNumFrom0_1000();
//Q11 Write a function that can take two interger values and finds all the odd numbers
//Q12 all the Odd numbers between the two numbers you have entered
oddNumbersBetween2intergers();

//Q13 Create a function that can create 6 random numbers
randomNum();

//Q14 Create functions by copying-and-pasting the example code, fix the issues to get it working, declare variables etc
printNum5to9();

//Q15  Create a fucntion that will print “finished” 10 time, using 3 ways for , while and a do while loops
finished3ways();
return 0;
}







