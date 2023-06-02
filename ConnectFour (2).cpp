/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

void printBoard(std::vector<std::vector<std::string>> board) {
    for (auto ele: board) {
        for (std::string word: ele) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void printIntro() {
    std::cout<<"Welcome to Connect 4!" <<  std::endl << std::endl;
    std::cout<<"To play, simply enter an integer between 1 and 7 to add a counter into that column" <<  std::endl << std::endl;
    std::cout<<"The board will be printed after each turn, for example, here is the starting board:" <<  std::endl << std::endl;
}

bool validateColumn(int column) {
    return (column >= 1 && column <= 7);
}

int takeIntegerInput() {
    int column;
    std::cout << "Please enter a column number between 1 and 7 ";
    std::cin >> column;
    while (!validateColumn(column)) {
        std::cout << "Sorry, that was invalid. Please enter a column integer between 1 and 7 ";
        std::cin >> column;
    }
    return column;
}

std::vector<std::vector<std::string>> playMove(std::string counter, int column, std::vector<std::vector<std::string>> board) {
    for (int i = 3; i >= 0; i-- ) {
        if (board[i][column-1] == ".") {
            board[i][column-1] = counter;
            return board;
        }
    }
}
/*
bool checkColumnFull (int column, std::vector<std::vector<std::string>> board) {
    return (std::find(board.begin(), board.end(), ".")!=board.end());
}
*/

int main()
{
    printIntro();
    std::vector<std::vector<std::string>> board = {{".", ".", ".", "."}, {".", ".", ".", "."}, {".", ".", ".", "."}, {".", ".", ".", "."}};
    printBoard(board);
    board = playMove("R", 2, board);
    printBoard(board);
    
    return 0;
}