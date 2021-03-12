#pragma once
#include <iostream>
using namespace std;
#include <iomanip>

class Player{
private:
    string forename;
    string surname;
    string position;
    int mobileNumber;
    int dob;
public:
    Player();
    Player(string forename,string surname);
    Player(string forename,string surname,string position,int mobileNumber);
// Functions Print Info
    void printPlayerInfo();
    string getForename();
    string getSurname();
    string getPosition();

//Setter function
    void setName(string forename,string surname);
    string getName();
//Setter function
  void setMobileNumber(long long int mobileNumber);
     int getMobileNumber();

};


