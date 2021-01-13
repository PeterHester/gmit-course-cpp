#include <iostream>
#include "ChristmasTree.h"
#include "LabInfo.h"
#include "NumsInArray.h"
#include "Arrays.h"
#include "ArrayOfSum.h"
void printArray(int arrOfNums[],int NumsInArray,int* p,int sum,int* j,int &scalar);
using namespace std;
int main()
{




  //Q1 Create a function called LabInfo Enter your name and the Lab
    LabInfo();
//Q2 Create a program to take in 6 numbers into an array
    int NumsInArray=6;
   int val[NumsInArray];
   int index=0;
   int sum;
   int scalar;
    cout<<"Please enter 6 number's between 1 & 99"<<endl;
    while (index<NumsInArray){
        int num;
        cin>>num;
        if ((num>0)&&(num<100)){
            val[index]=num;
            index++;
        }
    else{
cout<<"The Number you Entered is not Between 1 & 99"<<endl;
}
    }
    cout<<"The 6 Numbers you have entered into this Array are:"<<endl;
for (int i=0;i<NumsInArray;i++){

        cout<<val[i]<<",";


 }

{


 //Q3 print the array of numbers and memory locations
printNumsinArray(val,NumsInArray);

}
{


// Q4 Input a number called scalar




cout<<"Plese enter a Number called scalar :"<<endl;
cin>>scalar;

cout<<endl<<endl;
}

//Q5 Create a function that will pass the array by reference and also the scalar value and multiply each number in the array by the scalar.
printArray(val,NumsInArray,sum,scalar);
//Q6 Print the array of numbers and memory locations using a function and pass the array by value.
printArrayOfSum(val,NumsInArray,sum,scalar);
//Q7 Create new 2d array and design your own tree in a new function to print the tree out.

ChristmasTree();



return 0;

}




