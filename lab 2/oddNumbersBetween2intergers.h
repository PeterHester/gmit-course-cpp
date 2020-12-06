//Q11 Write a function that can take two interger values and finds all the odd numbers

void oddNumbersBetween2intergers(){
    cout<<endl<<endl;
    cout<<"Q11 Write a function that can take two interger values and finds all the odd numbers"<<endl;
int num1,num2;
cout<<"Enter your First Number : ";
cin>>num1;
cout<<"Enter your Second Number : ";
    cin>>num2;
    if ((num1%2==1)){
        cout<<"You have entered an odd First Number : "<<num1<<endl<<endl;
    }
    if (num2%2==1){
            cout<<"You have entered an odd Second Number : "<<num2<<endl<<endl;

    }
    //Q12 all the Odd numbers between the two numbers you have entered
    cout<<"Q 12 ..all the Odd numbers between the two numbers you have entered : "<<endl<<endl;
    int i;
    for(i=num1;i<=num2;i++)

    if(i%2==1||i%2==-1)

    cout<<i<<",";
for (i=num1;i>=num2;i--)

    if(i%2==1||i%2==-1)

    cout<<i<<",";
    cout<<endl<<endl;



}
