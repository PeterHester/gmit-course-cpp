#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test();


int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");
    club.setManagerName("Beano Kennedy");//set the managers name

    string clubName = club.getClubname();
    clubName = club.getDistrict();
    cout << clubName<< endl;

    string manager = club.getManagerName();
    manager = club.getManagerName();
    cout << manager<< endl; //Print out the managers name
    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();


    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    cout<<"TEAM"<<endl;// the first 15 names you enter will be the team for today
    club.printTeam();




    return 0;
}
