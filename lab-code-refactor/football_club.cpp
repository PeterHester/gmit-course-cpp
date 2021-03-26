#include"football_club.h"

    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
        this->manager = "NA";
    }
    FootballClub::FootballClub(string clubname, string district,string manager){
        this->clubname = clubname;
        this->district = district;
        this->manager = manager;
    }

    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }
    string FootballClub::getManagerName(){
        return manager;
    }
    void FootballClub::setClubname(string clubname){
        this->clubname = clubname;
    }

    void FootballClub::setDistrictname(string district){
        this->district = district;
    }
    void FootballClub::setManagerName(string manager){
        this->manager = manager;
    }


    void FootballClub::printInfo(){
     cout<<clubname<<endl;
     cout<<manager<<endl;
    }


    void FootballClub::addPlayerToSquad(Player tmp, int position){

       this->squad[position].setName(tmp.getForename(), tmp.getSurname());
       this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setDOB(tmp.getDOB());
        this->squad[position].setPosition(tmp.getPosition());
        this->squad[position].setMobileNumber(tmp.getMobileNumber());

    }
    void FootballClub::printTeam(){

        for(int i=0;i<15;i++){
            squad[i].printPlayerInfo();
            if (i==14){
            cout<<"-----------------------------------------"<<endl;
            cout<<"THIS IS THE TEAM FOR TODAY BEST OF LUCK "<<endl;
            cout<<"-----------------------------------------"<<endl;
            }
        }

    }
    void FootballClub::printSquad(){

        for(int i=0;i<MAXSQUAD;i++){
            squad[i].printPlayerInfo();

        }

    }


