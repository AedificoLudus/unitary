#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "stats.txt"
#include "football_func.h"

using std::ifstream;
using std::ofstream;
using std::string;
using std::cout
using std::cin

ifstream stats;
ofstream outfile;

int main()
{




    footBallPlayerType jock;

    stats.open("stats.txt");

    ifstream myFile("filename.txt");
    if (myFile.fail()) {
        cout << "stats.txt not found" << endl;
        cout << "Program will now terminate." << endl;
        return 1;
    }

    void showMenu();

    void getData();

}
