#include <iostream>
using namespace std;


      //Q3 print the array of numbers and memory locations
void printNumsinArray(int arrOfNums[],int NumsInArray){
            cout<<endl<<endl;
            cout<<"The Numbers in your array and there Memory location"<<endl;
            for (int i=0;i<NumsInArray;i++){
            cout<<arrOfNums[i]<<",-----------"<<&arrOfNums[i]<<endl;
            }

}



