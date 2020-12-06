//Q14 Create functions by copying-and-pasting the example code, fix the issues to get it working, declare variables etc
void printNum5to9(){
cout<<endl;
cout<<"Q14 print the numbers 5 through 9, and fix the issues in the code"<<endl;
int sum,count,grade;
int i=5;
while(i<10){
    cout<<i;
    cout<<endl;
    i=i+1;

}
//Finding the sum 1+2+3+....+20
i=1;
sum=0;
while(i<=20){
    sum=sum+i;
    i=i+1;
}

cout<<"The sum of 1+2+3...+19+20= "<<sum<<endl;
//Average a list of grades terminated by -1
sum =0;
count=0;
cout<<"Enter grade(-1 to end): "; //promt user for grade
cin>>grade;
while (grade != -1){
    sum = sum + grade;
    count = count + 1;
    //Get next grade
    cout << "Enter grade (-1 to end): ";
    cin>>grade;
}
if  (count > 0){
    cout << "Average is " << (double) sum / count<<endl<<endl;


}

}
