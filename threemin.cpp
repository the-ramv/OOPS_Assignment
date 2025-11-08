// Write a C++ program to check for minimum number among 3 numbers


//if ladder

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if ( num3 < num1 && num3 < num2){
        cout << "num3 is min";
    }
    else if(num2 < num3 && num2 < num1){
        cout << "num2 is min";
    }
    else if(num1 < num2 && num1 < num3){
        cout << "num1 is min";
    }
    return 0;
}


//nested if

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1<num2){
        if(num1<num3){
            cout << "num1 is min";
        } else{
            cout << "num3 is min";
        }
    }
        else{
            if(num2<num3){
                cout << "num2 is min";
            }
            else{
                cout << "num3 is min";
            }
        }

    return 0;
}




//switch

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3,choice;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if ( num3 < num1 && num3 < num2){
        choice = 1;
    }

    else if(num2 < num3 && num2 < num1){
        choice = 2;
    }

    else{
        choice = 3;
    }

    switch(choice){

        case 1:
            cout << "num3 is min";
            break;

        case 2:
            cout << "num2 is min";
            break;
        
        case 3:
            cout << "num1 is min";
            break;

        default:
            cout << "invalid input";
    }

    return 0;
}