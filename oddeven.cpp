// Write a C++ program to check for odd and even numbers


//if else

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ( num % 2 == 0){
        cout << "Number is even";
    }
    else {
        cout << "Number is odd";
    }
    return 0;
}




//if else ladder

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ( num % 2 == 0){
        cout << "Number is even";
    }
    else if( num % 2 != 0){
        cout << "Number is odd";
    }
    return 0;
}




// nested if

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ( num % 2 == 0){
        if ( num > 0){
            cout << "Number is even";
        }
    }
    else {
        cout << "Number is odd";
    }
    return 0;
}




//switch

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    switch(num%2){

    case 0:
        cout << "Number is even";
    break;


    case 1:
        cout << "Number is odd";
    break;

    default:
        cout << "Invalid input";
 }
    return 0;

}