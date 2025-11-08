// Question 1
// Write a C++ program to check for positive, negative and zero using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 10 numbers: ";

    do {
        cin >> num;

        if (num > 0) {
            positive++;
        }
        else if (num < 0) {
            negative++;
        }
        else {
            zero++;
        }

        i++;
    } while (i <= 10);

    cout << "positive numbers: " << positive << endl;
    cout << "negative numbers: " << negative << endl;
    cout << "zeros: " << zero << endl;

    return 0;
}



// Question 2
// Write a C++ program to check minimum number using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 1, min;

    cout << "Enter 10 numbers: " << endl;

    cin >> num;
    min = num;  
    i++;  

    do {
        cin >> num;
        if (num < min) {
            min = num; 
        }
        i++;
    } while (i <= 10);

    cout << "The minimum number is: " << min;

    return 0;
}



// Question 3
// Write a C++ program to check maximum number among 10 numbers

#include <iostream>
using namespace std;

int main() {
    int num, i = 1, max;

    cout << "Enter 10 numbers: " << endl;

    cin >> num;
    max = num;
    i++;

    do {
        cin >> num;
        if (num > max) {
            max = num;   
        }
        i++;
    } while (i <= 10);

    cout << "The maximum number is: " << max << endl;

    return 0;
}



// Question 4
// Write a C++ program to display all even numbers using do while loop 

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    cout << "Enter number: ";

    do {
        cin >> num;
        if (num % 2 == 0) {  
            cout << num << " is even";
        }
        i++;
    } while (i <= 10);

    return 0;
}



// Question 5
// Write a C++ program to check palindrome using do while loop 

#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;   

    do {
        digit = num % 10;              
        reversed = reversed * 10 + digit; 
        num = num / 10;                
    } while (num > 0);

    if (original == reversed) {
        cout << original << " is a Palindrome.";
    } 
    else {
        cout << original << " Not a Palindrome.";
    }

    return 0;
}



// Question 6
// Write a C++ program to check armstrong number using do while loop

#include <iostream>
using namespace std;

int main() {

    int num, temp, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = num;
    do {
        int digit = temp % 10;

        int power = 1;
        int i = 0;
        do {
            power *= digit;
            i++;
        } while (i < digits);

        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == num && num != 0) {
        cout << num << " is an Armstrong" << endl;
    } else {
        cout << num << " is not Armstrong" << endl;
    }

    return 0;
}



// Question 7
// Write a C++ program to check if a number is prime or not using do while loop

#include <iostream>
using namespace std;

int main() {
    int num, i = 2, isPrime = 1; 

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = 0; 
    } else {
        do {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        } while (i <= num / 2);
    }

    if (isPrime == 1) {
        cout << num << " is a Prime number" << endl;
    } else {
        cout << num << " is NOT a Prime number" << endl;
    }
    
    return 0;
}


