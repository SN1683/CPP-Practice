/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Please enter a value of n : " << endl;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
