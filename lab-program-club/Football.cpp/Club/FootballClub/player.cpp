
using namespace std;
#include "player.h"
#include <iostream>

#include <iomanip>

//Create constructors
    Player::Player(string forename,string surname,string position,int mobileNumber){
    this->forename = forename;
    this->surname = surname;
    this->position = position;
    this->mobileNumber = mobileNumber;
    }
// Functions Print Info
       void Player::printPlayerInfo(){
    cout<<"Players"<<forename<<" "<<surname<<endl;
}
// Getter function
  string Player::getForename(){
    return forename;
    }
// Getter function
    string Player::getSurname(){
    return surname;
    }
    // Getter function
    string Player::getPosition(){
    return position;
    }
// Getter function
     int Player::getMobileNumber(){
    return mobileNumber;
    }

void Player::setName(string forename,string surname){
    this->forename = forename;
    this->surname = surname;
}



