#include <iostream>


using namespace std;

#include <array>


//Fix: UI Problems
void drawBoard (std::array<char, 10> &board) {
    cout << "    |     | \n ";
    cout << board[1] << "  | " << board[2] << "   | " << board[3] << " \n";
    cout << " ---|-----|--- \n";
    cout << " " << board[4] << "  |" << board[5] << "    |" << board[6] << " \n";
    cout << "    |     | \n ";
    cout << "---|-----|---  \n";
    cout << " " << board[7] << "  | " << board[8] << "   | " << board[9] << " \n";
    cout << "    |     | \n ";

}

int InputNextMove () {
    int number;
    cout << "Input and return an integer number in range 1 to 9\n";
    while (!((number <= 9) && (number >= 1))) {
        cin >> number;
        if (!cin >> number) {
            cin.clear ();
            cin.ignore (5000, '\n');
        }
    }
    return number;
}

int main () {
    std::array<char, 10> board = {'#', 'X', 'O', 'X', 'O', 'X', 'O', 'X', 'O', 'X'};
    drawBoard (board);
    return 0;
}
