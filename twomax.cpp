// Write a C++ program to check for maximum number among 2 numbers


// if 

#include <iostream>
using namespace std;
int main(){

    int num1,num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num2 > num1){
        cout << "Number 2 is max";
    }
    else {
        cout << "Number 1 is max";
    }
    return 0;
}




//else if

#include <iostream>
using namespace std;
int main(){

    int num1,num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if( num2 > num1){
        cout << "Number 2 is max";
    }
    else if ( num1 > num2){
        cout << "Number 1 is max";
    }
    return 0;
}




//nested if

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if ( num1 != num2){
        if ( num1 > num2){
            cout << "num1 is max";
        }
        else{
            cout << "num2 is max";
        }
    }
        else{
            cout << "Both are equal";
        }
        return 0;
}
    