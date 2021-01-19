#include <iostream>
#include "ChristmasTree.h"
#include "LabInfo.h"
#include "NumsInArray.h"
#include "Arrays.h"
#include "ArrayOfSum.h"

using namespace std;
int main()
{




  //Q1 Create a function called LabInfo Enter your name and the Lab
    LabInfo();//call in function
//Q2 Create a program to take in 6 numbers into an array
    int NumsInArray=6;//the size of the Array
   int val[NumsInArray];//New array called val
   int index=0;//the value of int index
   int sum;//create int called "sum"
   int scalar;//create int called "scalar"
    cout<<"Please enter 6 number's between 1 & 99"<<endl;//ask the user to enter 6 number's between 1 & 99
    while (index<NumsInArray){ //while index is less than NumsInArray allow the user to enter a value
        int num;//create int called "num"
        cin>>num;//the user can enter there value here
        if ((num>0)&&(num<100)){ //use a if statment to check the numbers are between 1 & 99
            val[index]=num;//array val [index 0] =num
            index++;//add 1 to index each loop
        }
    else{
cout<<"The Number you Entered is not Between 1 & 99"<<endl;//use this Print out if the "if" statment is not true
}
    }
    cout<<"The 6 Numbers you have entered into this Array are:"<<endl;//Print out this when the 6 number have being entered
for (int i=0;i<NumsInArray;i++){ //"for" statment to take in the six numbers

        cout<<val[i]<<",";//print out the 6 numbers


 }

{


 //Q3 print the array of numbers and memory locations
printNumsinArray(val,NumsInArray);//call in function

}
{


// Q4 Input a number called scalar




cout<<"Plese enter a Number called scalar :"<<endl;//Print out to user
cin>>scalar;//Number entered

cout<<endl<<endl;//Two line spaces
}

//Q5 Create a function that will pass the array by reference and also the scalar value and multiply each number in the array by the scalar.
printArray(val,NumsInArray,sum,scalar);//call in function
//Q6 Print the array of numbers and memory locations using a function and pass the array by value.
printArrayOfSum(val,NumsInArray,sum,scalar);//call in function
//Q7 Create new 2d array and design your own tree in a new function to print the tree out.

ChristmasTree();//call in function



return 0;

}




