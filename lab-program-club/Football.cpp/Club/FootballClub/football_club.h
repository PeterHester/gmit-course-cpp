#include <iostream>
using namespace std;
#include <iomanip>

class FootballClub{
private:
    string clubname;
    string district;
    string stripColour;

public:
    //Create constructors
    FootballClub(string clubname,string district){
}
// Functions Print Info
    void printInfo(){
    cout<<clubname<<endl;
    }

        string  getclubname(){
        return clubname;
        }
        void setclubname(string clubnameTmp){
        this->clubname=clubnameTmp;
        }

        string   getDistrict(){
        return district;
        }
        void  setDistrict(string districtTmp){
        this->district=districtTmp;
        }


        string    setStripColour(string stripColour);
        string   getStripColour();







};


