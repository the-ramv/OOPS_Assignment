// Write a C++ program to check if a number is a double digit number or not

// if

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num >= 10 && num<=99){
        cout << "It is a double digit number";
    }
    else{
        cout << "It is a single digit number";
    }

    return 0;
}





//if ladder

#include <iostream>
using namespace std;
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 10 && num<=99){
        cout << "It is a double digit number";
    }
    else if(num<= -10 && num>=-99){
        cout << "It a double digit negative number";
    }
    else{
        cout << "It is a single digit number";
    }

    return 0;
}




//nested if

#include <iostream>
using namespace std;
int main(){  

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num>=10 || num<=-10){
        if(num <=99 && num>=-99){
            cout << "It is a double digit number";
        }
        else{
            cout << "It is a single digit number";
        }
    }

    else{
         cout << "It is a single digit number";   
    }

    return 0;
}




//switch

#include <iostream>
using namespace std;
int main(){

    int num,digits;

    cout << "Enter number: ";
    cin >> num;

    if ( num >= 0  && num <= 9){
        digits = 1;
    }
    else if(num >=10 && num <= 99){
        digits = 2;
    }
    else{
        digits = 0;
    }

    switch(digits){

        case 1:
            cout << "It is a one digit number";
            break;

        case 2:
            cout << "It is a double digit number";
            break;

        default:
            cout << "Invalid input";

    }

    return 0;
}