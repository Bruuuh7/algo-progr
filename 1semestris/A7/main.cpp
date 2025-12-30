#include <iostream>

/*
=== A7 =======================================
Create program both in C++, and Python. Input from keyboard all given values and print on screen all output.
Program should output error message for incorrect input data.
Program should allow repeated execution without quitting the program.
Submission must contain the following items
  a) commented source code C++
  b) source code in Python renamed as TXT
  c) test plan and results,For details see Lab requirements.
A7. Given natural number n. Print all the factors of n.

*/
using namespace std;

int main() {
    int repeat;
    do {
        int n;
        cout << "Enter a positive integer: ";
        std::cin >> n;
        if (n <= 0) {
            cout << "Invalid input: Number must be POSITIVE" << endl;
        }
        else {
            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    std::cout << i << " ";
                }
            }
        }
        cout <<endl << "Continue(1) or end (0): " << endl;
        cin >> repeat;
    } while (repeat == 1);
}

/* Test Plan
 * 1 Run
 * 2 Enter Number 0 (error message should appears)
 * 3 Enter 1 (continue)
 * 4 Enter 90 (1 2 3 5 6 9 10 15 18 30 45 90)
 * 5 Enter 0 (end)
 */