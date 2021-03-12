#pragma once
#include <iostream>
#include <iomanip>
#include "player.h"

using namespace std;

class FootballClub{
private:
    string clubname;
    string district;
    string stripColour;
    int maxSquad;
    Player squad[15];

public:

    Player team[11];
    //Create constructors
    void setFootballClub(string clubname,string district, string stripColour){
        this->clubname=clubname;
        this->district=district;
        this->stripColour=stripColour;
}

    void setmaxSquad(int maxSquad){
        this->maxSquad=maxSquad;
    }
// Functions Print Info
    void printInfo(string str1, string str2, string str3){
        cout<<str1<<" "<<str2<<" "<<str3<<endl;
    }
    string  getClubName(){
        return clubname;
    }

    string   getDistrict(){
        return district;
    }

    string   getStripColour(){
        return stripColour;
    }





};


