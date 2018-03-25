#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

struct footBallPlayerType
{
    std::string name;
    std::string position;
    int touchDowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};


void showMenu();

void getData(std::ifstream& inp, footBallPlayerType list[], int length, footBallPlayerType jock); //list[]

//void printPlayerData(footBallPlayerType list[], int length, int playerNum);
//
//void printData(footBallPlayerType list[], int length);
//
//void saveData(ofstream& outF, footBallPlayerType list[], int length);
//
//int searchData(footBallPlayerType list[], int length, string n);
//
//void updateTouchDowns(footBallPlayerType list[], int length, int tDowns, int playerNum);
//
//void updateCatches(footBallPlayerType list[], int length, int catches, int playerNum);
//
//void updatePassingYards(footBallPlayerType list[], int length, int passYards, int playerNum);
//
//void updateReceivingYards(footBallPlayerType list[], int length, int recYards, int playerNum);
//
//void updateRushingYards(footBallPlayerType list[], int length, int rushYards, int playerNum);
