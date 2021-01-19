#include <iostream>

using namespace std;
//Q7 Create new 2d array and design your own tree in a new function to print the tree out.
void ChristmasTree()
{
    int x=1,spaces=39,height=0;//create integer's

    cout<<"Please enter the height of your Tree above the number 3: ";//Print out
    cin>>height;//user enter the height over 3

    int n=0;//int value =0
    while (n<height)////while n is less than height move to "for" statment
    {

        for (int i=0;i<spaces;i++)//Formula to create spaces
            cout<<" ";//Print out a space
        for (int i=0;i<x;i++)//Formula to create "x"
            cout<<"x";//Print out x

        cout<<endl;//End line
         n++;//add 1 to int n
        spaces--;//take 1 away from spaces
        x+=2;//x+2
    }
       spaces=39;//int spaces = value 39
    int t=(height/10)+1;//calculation
    n=0;//int n value
   while (n<t){//while statment I used to create the tree stump
   for (int i=0;i<spaces;i++)//Formula to create spaces and lines to form the tree stump
            cout<<" ";//print out space
            cout<<"||";//print out lines
            cout<<endl;//end line
             n++;}//add 1 to n

    cout<<endl<<endl;//2 endl lines
    cout<<"Happy New Year !!";//print out
}
