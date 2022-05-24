//
// Created by Dmitry Morozov on 14/5/22.
//

#include <iostream>
#include <array>

//TODO: Move code to separate file next time!


using namespace std;


//TODO: Add arguments for current positions of players
// board  = { '#', 'X', 'O' , 'X', 'O', 'X', 'O', 'X', 'O' , 'X' }
void drawBoard (std::array<char, 10> &board) {
    cout << "   |    | \n ";
    cout << "--|----|-- \n";
    cout << "   |    | \n ";
    cout << "--|----|-- \n";
    cout << "   |    | \n ";

}

int main () {
    std::array<char, 10> board  = { '#', 'X', 'O' , 'X', 'O', 'X', 'O', 'X', 'O' , 'X' };
    drawBoard (board);
    return 0;
}