//
// Created by Julio Quintero on 10/10/18.
//

#ifndef HW4_GAME_H
#define HW4_GAME_H

#include <string>
#include <iostream>
using namespace std;


class Game {
    public:
        void setTrivia(string q, string one, string two, string three, string four, int a);
        string getTrivia();
        int getAnswer();
        Game();
        ~Game();

    private:
    string question, possible_answer_one,possible_answer_two,possible_answer_three,possible_answer_four;
    int rightAnswer;


};


#endif //HW4_GAME_H
