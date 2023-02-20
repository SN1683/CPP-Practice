/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int remainder;
    int n;
    vector<int> remainders;
    cout << "Please enter a decimal number to convert (non-negative): " << endl;
    cin >> n;
    while (n != 0) {
        remainder = n % 2;
        remainders.push_back(remainder);
        n = n / 2;
    }
    cout << "Binary Representation: " << endl;
    std::reverse(remainders.begin(), remainders.end());
    for (auto i: remainders) {
        cout << i;
    }
    return 0;
}

