//
// Created by Dmitry Morozov on 14/5/22.
//

#include <iostream>

using namespace std;
#include <array>
void drawBoard (std::array<char, 10> &board) {
    cout << "   |     | \n ";
    cout<<board[1]<<" | "<<board[2]<<"   | "<<board[3]<<" \n";
    cout << "---|-----|--- \n";
    cout<<" "<<board[4]<<" | "<<board[5]<<"   | "<<board[6]<<" \n";
    cout << "   |     | \n ";
    cout << "--|-----|-- \n";
    cout<<" "<<board[7]<<" | "<<board[8]<<"   | "<<board[9]<<" \n";
    cout << "   |     | \n ";

}

int main () {
    std::array<char, 10> board  = { '#', 'X', 'O' , 'X', 'O', 'X', 'O', 'X', 'O' , 'X' };
    drawBoard (board);
    return 0;
}
