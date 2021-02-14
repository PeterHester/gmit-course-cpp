#ifndef LABINFO_H
#define LABINFO_H
#include <iostream>
#include <string>
using namespace std;

void LabInfo(){
    cout <<"Peter Hester\n";
    cout<<"Lab using classes"<<endl;
}
// Class for storing lab Information
class labInfo{
public:
    labInfo();
    string Name;
    string labId;
    int date;
    void printInfo(){
    cout<<Name<<endl;
    cout<<labId<<endl;
   // cout<<day<<endl;
   // cout<<month<<endl;
   // cout<<year<<endl;
    }
    //Setter Day Month Year
    void setdate(int dayTemp,int monthTemp,int yearTemp){
    dayTemp=day;
    monthTemp=month;
    yearTemp=year;
    int date=(dayTemp,monthTemp,yearTemp);
    }
int getdate(){
return date;}
private:
    int day;
    int month;
    int year;



};
#endif // LABINFO_H
