#include "football_func.h"

void showMenu()
{
    int choice;

    cout << endl
        << " 1 - View Current Statistics" << endl
        << " 2 - Update Statistics" << endl
        << " 3 - Exit" << endl
        << " Enter your choice and press return key: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        //code to open the file and print data
            break;


        case 2:
        //code to allow score update
            break;


        case 3:
        cout << "End of Program.";
        exit(1); //code to terminate the program
            break;


        default:
            cout << "Invalid input";
            break;

    }
}

void getData(ifstream & inf, footBallPlayerType list[], int length)
{
}


void getData(ifstream& inp, footBallPlayerType list[], int length, footBallPlayerType jock) //list[]
{

    cin >> jock.name;
    cin >> jock.position;
    cin >> jock.touchDowns;
    cin >> jock.catches;
    cin >> jock.passingYards;
    cin >> jock.receivingYards;
    cin >> jock.rushingYards;


}
