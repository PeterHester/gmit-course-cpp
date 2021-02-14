#include <iostream>
#include <string>
#include "labInfo.h"


using namespace std;


/*void LabInfo(){
    cout <<"Peter Hester\n";
    cout<<"Lab using classes"<<endl;
}
// Class for storing lab Information
class labInfo{
public:
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



};*/
int main(){
    LabInfo();
    labInfo();
    labInfo Mydetails;
    labInfo Mydate;

    Mydetails.Name="Peter Hester";
    Mydetails.labId="G00180755@gmit.ie";
    //Mydetails.day=12;
    //Mydetails.month=02;
    //Mydetails.year=2021;
    Mydetails.printInfo();
    Mydate.setdate(12022021);
cout<<Mydate.getdate();

return 0;
}
