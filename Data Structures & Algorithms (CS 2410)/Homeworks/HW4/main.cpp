#include <iostream>
#include <unistd.h> // to use usleep(milliseconds). This is for MacOS, if you want to use for Windows, use sleep()
#include "Game.h"
using namespace std;

int main() {

    int answer, player_one_points = 0, player_two_points = 0;

         Game questions[10];

    questions[0].setTrivia("What handgun in Resident Evil 4 has the highest damage when full upgraded?", "1)Handgun",
                           "2)Punisher", "3)Red9", "4)Blacktail",3);

    questions[1].setTrivia("What is the name of the second expansion of the popular online game World of Warcraft?",
                           "1)Legion", "2)Burning Crusade", "3)Wrath of the Lich King", "4)Mist of Pandaria",3);


    questions[2].setTrivia("In the video game The Witcher 3, what type of sword is used to kill monsters?",
                           "1)Silver Swords", "2)Iron Swords", "3)Holy Swords", "4)Blessed Swords",1);

    questions[3].setTrivia("What is the holy trinity of most Online Roll Playing Games?",
                           "1)Power,Magic,Defense", "2)Dps,Tank,healer", "3)Intelligence,Agility,Strength",
                           "4)None of these",2);

    questions[4].setTrivia("In the popular online game League of Legends, what does Lee sin uses?",
                           "1)Mana", "2)Power", "3)Magic", "4)Energy",4);

    questions[5].setTrivia("In the video game Dark Souls III, what is the name of the final DLC?",
                           "1)Artorias of the Abyss", "2)Legion", "3)The Ringed City", "4)Ashes of Ariandel",3);

    questions[6].setTrivia("In the video game BloodBorne, what is the last boss in the base game?",
                           "1)Blood Starved Beast", "2)Father Gascoigne", "3)One Reborn", "4)Moon Presence",4);

    questions[7].setTrivia("What is the final boss in the raid Icecrown Citadel from World of Warcraft?",
                           "1)The Lich King", "2)Twin Princes", "3)Lady Death Whisper", "4)Death bringer Surfang",1);

    questions[8].setTrivia("How does Kratos refers to his son in God of War 4? ",
                           "1)Child", "2)Kid", "3)Son", "4)Boy",4);

    questions[9].setTrivia("In  online games, what does brb stand for?",
                           "1)Best road ever", "2)Bank right Bank", "3)Be right back", "4)Beer right beer",3);


    cout << "Welcome to this trivia game! There are 5 question per each player, this game only allows 2 players\n"
            "The Game starts in 5 seconds, Good Luck!" << "\n\n";
    usleep(5000000);


    cout << "Get ready player 1 The game starts in 5 seconds!" << "\n";
    cout << "1" << "\n";
    usleep(1000000);
    cout << "2" << "\n";
    usleep(1000000);
    cout << "3" << "\n";
    usleep(1000000);
    cout << "4" << "\n";
    usleep(1000000);
    cout << "5" << "\n\n";
    usleep(1000000);

    for (int i = 0; i < 5; ++i) {
        cout << "Question number " << i + 1 << " :" << "\n";
        cout << questions[i].getTrivia() << "\n";
        cin >> answer;
        if (answer == questions[i].getAnswer()) {
            cout << "You are right! You got one point" << "\n";
            player_one_points = player_one_points + 1;

        }
        else {
            cout << "I'm sorry, wrong Answer \n" << "\n";
             }
    }
    cout << "Player one earned: " << player_one_points << "\n\n";

    cout << "Get ready player 2 The game starts in 5 seconds!" << "\n\n";
    for (int i = 0; i <1 ; ++i)
        {
        cout << "1" << "\n";
        usleep(1000000);
        cout << "2" << "\n";
        usleep(1000000);
        cout << "3" << "\n";
        usleep(1000000);
        cout << "4" << "\n";
        usleep(1000000);
        cout << "5" << "\n\n";
        usleep(1000000);
             }
             for (int j = 5; j < 9; ++j) {
                 cout << "Question number " << j + 1 << " :" << "\n";
                 cout << questions[j].getTrivia() << "\n";
                 cin >> answer;
                 if (answer == questions[j].getAnswer()) {
                     cout << "You are right! You got one point" << "\n";
                     player_two_points = player_two_points + 1;

                 }
                 else
                     {
                     cout << "I'm sorry, wrong Answer" << "\n";
                     }
             }

             cout << "Player two earned: " << player_two_points << "\n\n";

             cout << "The game is done!\nPlayer one earned: " << player_one_points <<
                         "\nAnd Player two earned: " << player_two_points <<"\n";

             if (player_one_points > player_two_points) {
                 cout << "Player one WON!" << "\n";
             }
             else if(player_one_points < player_two_points){
                 cout << "Player two WON!!"<<"\n";
             }
             else
                 {
                 cout << "It is a Draw"<<"\n";
                 }
    return 0;
}