// Question 1
// Write a C++ program to check odd and even numbers using functions 

#include <iostream>
using namespace std;
void oddoreven (int x){

    if ( x % 2 == 0){
        cout <<"\nNumber is even";
    }
    else{
        cout << "\n Number is odd";
    }
}
int main(){

    int x;
    
    cout << "Enter the value of x: ";
    cin >> x;

    oddoreven(x);
    return 0;
}



// Question 2
// Write a C++ program to if a number is palindrome using functions

#include <iostream>
using namespace std;
void palindrome(int x){

    int rev = 0;
    int digits = 0;

    int temp = x;
    while ( temp > 0){
        int digits = temp % 10;
        rev = rev*10 + digits;
        temp /= 10;
    }

    if (x == rev){
        cout << "\n Number is palindrome";
    }
    else{
        cout << "\n Number is not palindrome";
    }
}

int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    palindrome(x);
    return 0;
}



// Question 3
// Write a C++ program to check for armstrong number using function 

#include <iostream>
using namespace std;
void armstrong(int x){

    int temp = x;
    int digits = 0;
    while( temp > 0){
        digits++;
        temp /= 10;
    }

    temp = x;
    int digit = 0;
    int sum = 0;
    while ( temp > 0){
        digit = temp % 10;
        int power = 1;
        for ( int i = 0; i < digits; i++){
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == x){
            cout << "\nNumber is armstrong";
        }
        else{
            cout << "\nNumber is not armstrong";
        }
}
int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    armstrong(x);
    return 0;
}



// Question 4
// Write a C++ program to check for prime number using function

#include <iostream>
using namespace std;
void prime(int x){

    int isprime = 1;

    for (int  i = 2; i < x; i++){
        if ( x % i == 0){
            isprime = 0;
            break;
        }
    }

    if ( isprime == 1){
        cout << "\n" << x << " is prime number";
    }
    else{
        cout << "\n" << x << " is not a prime number";
    }
}
int main(){

    int x;

    cout << "Enter a number: ";
    cin >> x;

    prime(x);
    return 0;
}



// Question 5
// Write a C++ program to get the factorial of a number using function

#include <iostream>
using namespace std;
void factorial(int x){

    int fac = 1;
    for ( int i = 1; i <= x; i++){
        fac *= i;
    }

    cout << "\nFactorial of this number is: " << fac;
}

int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    factorial(x);
    return 0;

}



// Question 6
// Write a C++ program to check for maximum number using function

#include <iostream>
using namespace std;
void max(int x, int y){

    if (x>y){
        cout << "\n" << x << " is maximum";
    }
    else{
        cout << "\n" << y << " is maximum";
    }
}
int main(){

    int x,y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    max(x,y);

    return 0;
}



// Question 7
// Write a C++ program to get the power of a number using function

#include <iostream>
using namespace std;
void power(int x){

    int power = 1;
    for (int i = 1; i <= x; i++){
        power *= x;
    }

    cout << "\nPower of x is: " << power;
}
int main(){

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    power(x);
    return 0;
}