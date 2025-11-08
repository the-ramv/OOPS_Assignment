// Write a C++ program to check if a number is a 3 digit number or not also display the sum 

//if

#include <iostream>
using namespace std;
int main(){

    int num,sum;

    cout << "Enter a number: ";
    cin >> num;

    if ( num >= 100 && num <= 999){
        sum = (num/100)  + ((num/10) % 10) + (num%10);
        cout << "It is a 3 digit number" << endl;
        cout << "Sum is: " << sum;
    }
    else{
        cout << "It is not a 3 digit number";
    }
    return 0;
}




//if ladder

#include <iostream>
using namespace std;
int main(){

    int num,sum;

    cout << "Enter a number: ";
    cin >> num;

    if ( num >= 100 && num <= 999){
        sum = (num/100) + ((num/10) % 10) + (num%10);
        cout << "It is a 3 digit number" << endl;
        cout << "Sum is: " << sum;
        
    }
    else if( num < 100 || num > 999){
        cout << "It is not a 3 digit number";
    }
    return 0;
}




//nested if

#include <iostream>
using namespace std;
int main(){

    int num,sum;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 100 || num <= -100){
        if (num <= 999 && num >= -999){
            sum = (num/100) + ((num/10) % 10) + (num%10);
            cout << "It is a 3 digit number" << endl;
            cout << "Sum is: " << sum;
        }
        else{
            cout << "It is not a 3 digit number";
        }
    }

    else{
        cout << "It is not a 3 digit number";
    }
    return 0;
}




//switch

#include <iostream>
using namespace std;
int main(){

    int num,digits,sum;

    cout << "Enter a number: ";
    cin >> num;

    if( num >= 100 && num <= 999){
        sum = (num/100)  + ((num/10) % 10) + (num%10);
        digits = 1;
    }
    else{
        digits = 2;
    }

    switch(digits){

        case 1:
            cout << "It is a 3 digit number" << endl;;
            cout << "Sum is: " << sum;
            break;

        case 2:
            cout << "It is not a 3 digit number";
            break;

        default:
            cout << "Invalid input";
    }

    return 0;
}


