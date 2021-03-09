#include <iostream>
using namespace std;
#include "football_club.h"
int main()
{
    FootballClub club("Castlerea Celtic","Roscommon and district League");
    club.printInfo();
    club.setclubname("Castlerea Celtic");
    club.setDistrict("Roscommon and district League");
    string clubName = club.getclubname();
    string district = club.getDistrict();
    cout<< clubName<<endl;
    cout<< district<<endl;
    return 0;
}

