/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printBoard(vector<vector<string>> board) {
    for (auto ele: board) {
        for (string word: ele) {
            cout << word << " ";
        }
        cout << endl;
    }
    cout << endl;
}

string checkForWin(vector<string> line) {
    int score;
    string prevChar;
    if (line[0] == "Y") {
        score = 1;
        prevChar = "Y";
    } else if (line[0] == "R") {
        score = -1;
        prevChar = "R";
    } else {
        score = 0;
        prevChar = ".";
    }
    
    for (int i = 1; i < line.size(); i++) {
        if (line[i] == prevChar && line[i] == "Y") {
            score++;
        } else if (line[i] == prevChar && line[i] == "R") {
            score--;
        } else if (line[i] == "Y" && line[i] != prevChar) {
            score = 1;
        } else if (line[i] == "R" && prevChar != prevChar) {
            score = -1;
        } else if (line[i] == ".") {
            score = 0;
        }
        prevChar = line[i];
    }

    if (score == 4) {
        return "Y";
    } else if (score == -4) {
        return "R";
    } else {
        return "No Winner";
    }
}

string checkForAnyWin(vector<vector<string>> board) {
    vector<vector<string>> allLines;
    for (int i = 0; i < board.size(); i++) {
        allLines.push_back(board[i]);
    }
    for (auto ele: allLines) {
        if (checkForWin(ele) != "No Winner") {
            return checkForWin(ele);
        }
    }
    return "No Winner";
}

void printIntro() {
    cout<<"Welcome to Connect 4!" <<  endl << endl;
    cout<<"To play, simply enter an integer between 1 and 7 to add a counter into that column" <<  endl << endl;
    cout<<"The board will be printed after each turn, for example, here is the starting board:" <<  endl << endl;
}

bool validateColumn(int column) {
    return (column >= 1 && column <= 4);
}

bool checkColumnFull (int column, vector<vector<string>> board) {
    vector<string> boardColumn;
    for (int i = 0; i < board.size(); i++) {
        boardColumn.push_back(board[i][column-1]);
    }
    return !(find(boardColumn.begin(), boardColumn.end(), ".")!=boardColumn.end());
}


int takeIntegerInput(vector<vector<string>> board) {
    int column;
    cout << "Please enter a column number between 1 and 4 ";
    cin >> column;
    while ((!validateColumn(column)) || checkColumnFull(column, board)) {
        if (!validateColumn(column)) {
            cout << "Sorry, that was invalid. Please enter a column integer between 1 and 4 ";
        } else if (checkColumnFull(column, board)) {
            cout << "Sorry, that column is full. Please enter a different integer between 1 and 4 ";
        }
        cin >> column;
    }
    
    return column;
}

void playMove(string counter, int column, vector<vector<string>>& board) {
    for (int i = 3; i >= 0; i-- ) {
        if (board[i][column-1] == ".") {
            board[i][column-1] = counter;
            break;
        }
    }
}



int main()
{
    int turns = 0;
    printIntro();
    vector<vector<string>> board = {{".", ".", ".", "."}, {".", ".", ".", "."}, {".", ".", ".", "."}, {".", ".", ".", "."}};
    printBoard(board);
    string counter;
    while (turns < 16) {
        if (turns % 2 == 0) {
            counter = "R";
        } else {
            counter = "Y";
        }
        int column = takeIntegerInput(board);
        playMove(counter, column, board);
        printBoard(board);
        if (checkForAnyWin(board) != "No Winner") {
            cout << checkForAnyWin(board) << " Wins the Game!";
            break;
        }
        turns++;
    }
    return 0;
}