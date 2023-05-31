/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

void printBoard(std::vector<<vector<std::string>> board) {
    for (auto ele: board) {
        std::cout << ele;
    }    
}

int main()
{
    std::cout<<"Hello World";
    std::vector<std::string> board = {{"Hello", "World"}, {"Blob", "Bob"}};
    printBoard(board);
    return 0;
}
