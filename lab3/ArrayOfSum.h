#include <iostream>
using namespace std;


   //Q6 Print the array of numbers and memory locations using a function and pass the array by value.

void printArrayOfSum(int arrOfNums[],int NumsInArray,int sum,int &scalar){
    int* j;
    int* p;
    int arrOfNums1[5];
            p=&NumsInArray;
            j=&sum;
            cout<<endl<<endl;
            cout<<"The sum of the Numbers in your array multiplyed by the scalar and there Memory location"<<endl;
            for (int i=0;i<NumsInArray;i++){
             sum=arrOfNums[i]*scalar;
            cout<<arrOfNums1[i]<<"---------------"<<&arrOfNums1[i]<<endl;
            }

}


