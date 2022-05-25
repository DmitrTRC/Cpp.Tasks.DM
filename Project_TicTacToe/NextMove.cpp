//
// Created by Dmitry Morozov on 25/5/22.
//
#include <iostream>


using namespace std;

//TODO: Read and discuss the code
int InputNextMove () {
    int number;
    cout << "Input and return an integer number in range 1 to 9\n";

    while ((!(cin >> number)) || (number > 9 || number < 1)) {

        cin.clear ();
        cin.ignore (5000, '\n');

    }

    return static_cast<int>(number);
}

int main () {
    int number = InputNextMove ();
    cout << "You entered " << number << endl;
    return 0;
}