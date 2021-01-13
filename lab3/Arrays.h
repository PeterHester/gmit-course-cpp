#include <iostream>
using namespace std;
//Q5 Create a function that will pass the array by reference and also the scalar value and multiply each number in the array by the scalar.
void printArray(int arrOfNums[],int NumsInArray,int sum,int &scalar){
    int* j;
    int* p;
    int arrOfNums1[5];
            p=&NumsInArray;
            j=&sum;
            cout<<endl<<endl;
            cout<<"The Numbers in the array "<<endl;
            for (int i=0;i<NumsInArray;i++){
             sum=arrOfNums[i]*scalar;

            arrOfNums1[i]=sum;


            cout<<arrOfNums[i]<<" * "<<scalar<<" = "<<arrOfNums1[i]<<endl;
            }

}

