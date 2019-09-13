//
// Created by Julio Quintero on 10/10/18.
//
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game() {
    question = " ";
    possible_answer_one = " ";
    possible_answer_two = " ";
    possible_answer_three = " ";
    possible_answer_four = " ";
    rightAnswer = 0;
}

void Game::setTrivia(string q, string one, string two, string three, string four,int a) {
    question = q;
    possible_answer_one = one;
    possible_answer_two = two;
    possible_answer_three = three;
    possible_answer_four = four;
    rightAnswer = a;

}

string Game::getTrivia() {

    string allValues = question +"\n"+ possible_answer_one+"\n"+possible_answer_two+"\n"+
            possible_answer_three +"\n"+ possible_answer_four;

    return  allValues;

}

int Game::getAnswer(){
    return rightAnswer;
}


Game::~Game(){}