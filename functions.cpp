#include "football_func.h"

void showMenu()
{
    int choice;

    std::cout << "\n"
        << " 1 - View Current Statistics\n"
        << " 2 - Update Statistics\n"
        << " 3 - Exit\n"
        << " Enter your choice and press return key: ";
    std::cin >> choice;

    switch (choice)
    {
        case 1:
        //code to open the file and print data
            break;


        case 2:
        //code to allow score update
            break;


        case 3:
        std::cout << "End of Program.";
        exit(1); //code to terminate the program
            break;


        default:
            std::cout << "Invalid input";
            break;

    }
}

void getData(std::ifstream & inf, footBallPlayerType list[], int length)
{
}


void getData(std::ifstream& inp, footBallPlayerType list[], int length, footBallPlayerType jock) //list[]
{

    std::cin >> jock.name;
    std::cin >> jock.position;
    std::cin >> jock.touchDowns;
    std::cin >> jock.catches;
    std::cin >> jock.passingYards;
    std::cin >> jock.receivingYards;
    std::cin >> jock.rushingYards;


}
