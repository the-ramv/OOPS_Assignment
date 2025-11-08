// Write a C++ program to check if a number is a 4 digit number and check sum of 1st and 2nd digit should be greater than 3rd and 4th digit and sum of all the digits should be even and check if the sum is a single digit or double digit number


// if
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Invalid: not a 4-digit number\n";
    } else {
        int d1 = num / 1000;
        int d2 = (num / 100) % 10;
        int d3 = (num / 10) % 10;
        int d4 = num % 10;

        int sum1 = d1 + d2;
        int sum2 = d3 + d4;
        int total = d1 + d2 + d3 + d4;

        if (sum1 <= sum2) {
            cout << "Invalid: sum1 not greater than sum2\n";
        }
        else if (total % 2 != 0) {
            cout << "Invalid: total is odd\n";
        }
        else if (total <= 9) {
            cout << "Valid: sum1>sum2, total even, single digit\n";
        }
        else {
            cout << "Valid: sum1>sum2, total even, not single digit\n";
        }
    }

    return 0;
}




// nested if 

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        int d1 = num / 1000;
        int d2 = (num / 100) % 10;
        int d3 = (num / 10) % 10;
        int d4 = num % 10;

        int sum1 = d1 + d2;
        int sum2 = d3 + d4;
        int total = d1 + d2 + d3 + d4;

        if (sum1 > sum2) {
            if (total % 2 == 0) {
                if (total <= 9) {
                    cout << "Valid: sum1>sum2, total even, single digit\n";
                } else {
                    cout << "Valid: sum1>sum2, total even, not single digit\n";
                }
            } else {
                cout << "Invalid: total is odd\n";
            }
        } else {
            cout << "Invalid: sum1 not greater than sum2\n";
        }
    } else {
        cout << "Invalid: not a 4-digit number\n";
    }

    return 0;
}
