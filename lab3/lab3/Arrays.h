#include <iostream>
using namespace std;
//Q5 Create a function that will pass the array by reference and also the scalar value and multiply each number in the array by the scalar.
void printArray(int arrOfNums[],int NumsInArray,int sum,int &scalar){
    int* j; //use j as a pointer
    int* p; //use p as a pointer
    int arrOfNums1[5];//New array for the Answer to the multiplication of the user array and scalar
            p=&NumsInArray;//pointer p = the address of NumsInArray
            j=&sum;//pointer j = the address of sum
            cout<<endl<<endl;//Two line spaces
            cout<<"The Numbers in the array "<<endl;//print out
            for (int i=0;i<NumsInArray;i++){//"for" statment to take in the six numbers
             sum=arrOfNums[i]*scalar;//sum equals [i] * scalar each time i increses by 1 six times

            arrOfNums1[i]=sum;//new array arrOfNums1 = sum


            cout<<arrOfNums[i]<<" * "<<scalar<<" = "<<arrOfNums1[i]<<endl;//Print out
            }

}

