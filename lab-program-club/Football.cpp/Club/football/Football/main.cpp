#include <iostream>
#include"football_club.h"
#include"player.h"

using namespace std;

int main(){




    FootballClub club;
    club.setFootballClub("Castlerea Celtic, ","Roscommon and district League, ","Green and White Hoops,");
    club.printInfo(club.getClubName(),club.getDistrict(),club.getStripColour());
    int maxSquad=15;
    Player Squad[maxSquad];
    Player Team [11];
    Player Player;
    for (int i=0;i<maxSquad;i++){
        if (i==0){
            Squad[i].setPlayer("Jeffery", "Claffey","Goalkeeper","0868656550");
        }
            {
            Squad[i].setPlayer("Fergal", "Regan","Defender","0868656550");
        }
        if (i==1){
            Squad[i].setPlayer("Damien", "Garvey","Defender","0868656550");
        }
         if (i==2){
            Squad[i].setPlayer("Ronan", "Mugan","Defender","0868656550");
        }
         if (i==3){
            Squad[i].setPlayer("Peter", "Hester","Defender","0868656550");
        }
         if (i==4){
            Squad[i].setPlayer("Ronan", "Curran","Midfield","0868656550");
        }
         if (i==5){
            Squad[i].setPlayer("David", "Fitzy","Midfield","0868656550");
        }
        if (i==6){
            Squad[i].setPlayer("Jim", "Webb","Midfield","0868656550");
        }
        if (i==7){
            Squad[i].setPlayer("Trevor", "Kelly","Midfield","0868656550");
        }
        if (i==8){
            Squad[i].setPlayer("Giles", "McDonagh","Midfield","0868656550");
        }
        if (i==9){
            Squad[i].setPlayer("Conor", "McSharry","Striker","0868656550");
        }
        if (i==10){
            Squad[i].setPlayer("Jimmy", "Mannion","Striker","0868656550");
        }
        if (i==11){
            Squad[i].setPlayer("Dermot", "Henry","Defender","0868656550");
        }
         if (i==12){
            Squad[i].setPlayer("Mervin", "Kelly","Striker","0868656550");
        }
         if (i==13){
            Squad[i].setPlayer("Greg", "Kelly","Midfield","0868656550");
        }
         if (i==14){
            Squad[i].setPlayer("Mark", "Mull","Midfield","0868656550");
        }




    }

    for (int i=0;i<maxSquad;i++){
        Squad[i].printInfo(Squad[i].getForename(),Squad[i].getSurname(),Squad[i].getPosition(),Squad[i].getMobileNumber());

   }
    return 0;
}

