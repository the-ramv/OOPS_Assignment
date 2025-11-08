// Question 1
// Write a C++ program to print from 10 to 1

#include <iostream>
using namespace std;
int main(){

    int num = 10;
    while (num>=1){
        cout << num<<endl;
        num--;
    }

    return 0;
}



// Question 2
// Write a C++ program to print the series of odd numbers which include 1 to 20
#include <iostream>
using namespace std;
int main(){

    int num = 1;

    while(num<=20){
        num++;
        if(num % 2 != 0){
            cout << num<<endl;
        }
    }
    return 0;
}



// Question 3
// Write a C++ program to accept 10 numbers in loop and display sum of all numbers

#include <iostream>
using namespace std;
int main(){

    int sum = 0;
    int i = 1,num;

    cout << "Enter 10 numbers: ";

    while(i<=10){
        cin >> num;
        sum += num;
        i++;
    }
    
    cout << "Sum is: " << sum;

    return 0;
}