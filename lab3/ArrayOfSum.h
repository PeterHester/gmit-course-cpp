#include <iostream>
using namespace std;


   //Q6 Print the array of numbers and memory locations using a function and pass the array by value.

void printArrayOfSum(int arrOfNums[],int NumsInArray,int sum,int &scalar){
    int* j;//use j as a pointer
    int* p; //use p as a pointer
    int arrOfNums1[5];//New array for the Answer to the multiplication of the user array and scalar
            p=&NumsInArray;//pointer p = the address of NumsInArray
            j=&sum;//pointer j = the address of sum
            cout<<endl<<endl;//Two line spaces
            cout<<"The sum of the Numbers in your array multiplyed by the scalar and there Memory location"<<endl;//print out
            for (int i=0;i<NumsInArray;i++){
             sum=arrOfNums[i]*scalar;//multiply each number in the array by the scalar number
            cout<<arrOfNums1[i]<<"---------------"<<&arrOfNums1[i]<<endl;//print out the answer to the sum and it's memory
            }

}


