#include <iostream>

using namespace std;
//Q7 Create new 2d array and design your own tree in a new function to print the tree out.
void ChristmasTree()
{
    int x=1,spaces=39,height=0;

    cout<<"Please enter the height of your Tree above the number 3: ";
    cin>>height;

    int n=0;
    while (n<height)
    {

        for (int i=0;i<spaces;i++)
            cout<<" ";
        for (int i=0;i<x;i++)
            cout<<"x";

        cout<<endl;
         n++;
        spaces--;
        x+=2;
    }
       spaces=39;
    int t=(height/10)+1;
    n=0;
    while (n<t){
   for(int i=0;i<spaces;i++)
            cout<<" ";
            cout<<"||";
            cout<<endl;
             n++;}

    cout<<endl<<endl;
    cout<<"Happy New Year !!";
}
