#include <iostream>

using namespace std;

int main()
{
    // menu
    int userChoice = 0;
    bool keepGoing = true;
    while (keepGoing) {

        cout << "Simple Menu" << endl;
        cout << "1. option 1" << endl;
        cout << "2. Exit" << endl;
        cout << "choose: ";
        cin >> userChoice;
        cout << "You picked " << userChoice << endl;

        if (userChoice == 1) {
            cout << "You picked Option 1." << endl;
        }
        else if (userChoice == 2) {
            cout << "Exiting ... goodbye." << endl;
            keepGoing = false; // exit loop
        }
        else {
            cout << "Invalid input, please try again." << endl;
        }
    }
    return 0;
}
