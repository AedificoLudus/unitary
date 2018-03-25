#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
//#include "stats.txt"
#include "football_func.h"


std::ifstream stats;
std::ofstream outfile;

int main()
{




    footBallPlayerType jock;

    stats.open("stats.txt");

    std::ifstream myFile("filename.txt");
    if (myFile.fail()) {
        std::cout << "stats.txt not found\n";
        std::cout << "Program will now terminate.\n";
        return 1;
    }

    void showMenu();

    void getData();

}
