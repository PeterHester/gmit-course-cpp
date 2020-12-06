
//Q3 A function that can check the user has input a number between 1 and 100
void numBetween1_100(){
    cout<<"Q3 I will tell you if the number you enter is between 1 and 100"<<endl;
    int number;
    cout<<"Please enter a number between 1 and 100: ";
    cin>>number;
    if ((number>=1)&&(number<=100)){
    cout<<"correct "<<number<<" is between 1 and 100"<<endl;
    }
else cout<<"The number you entered is not between 1 and 100"<<endl;

}

