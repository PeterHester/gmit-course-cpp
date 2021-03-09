
#include <iostream>
using namespace std;
#include <iomanip>

class Player{
private:
    string forename;
    string surname;
    string position;
    int mobileNumber;

public:
    Player(string forename,string surname);
    Player(string forename,string surname,string position,int mobileNumber);
// Functions Print Info
    void printPlayerInfo();
    string getForename();
    string getSurname();
    string getPosition();
    int getMobileNumber();
//Setter function
    void setName(string forename,string surname);
    string getName();
//Setter function
  void setMobileNumber(int mobileNumber){
     int getMobileNumber();
    }

};


