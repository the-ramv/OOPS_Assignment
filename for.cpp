// Question 1
// Write a C++ program to accept 10 numbers and display the first even numbers using for loop 

#include <iostream>
using namespace std;
int main(){

    int i,num;

    cout << "Enter 10 numbers: ";
    

    for ( i = 1; i<=10; i++){
        cin >> num;
        if(num % 2 == 0){
            cout << "First even number is "<<num;
        }
    }
    
    return 0;
}



// Question 2
// Write a C++ program to print the table of 10 numbers using for loop

#include <iostream>
using namespace std;
int main(){

    int num,i,j;

    cout << "Enter 10 numbers: ";

    for(i = 1; i <= 10; i++){
        cin >> num;
    

        cout << "\nTable of " << num << endl;

        for (j = 1; j <= 10; j++){
            cout << num << " X " << j << " = " << j*num << endl; 
        }
    }
    return 0;
}



// Question 3
// Write a C++ program to get the factorial of 10 numbers using for loop

#include <iostream>
using namespace std;
int main(){

    int num,i,j,factorial = 1;

    cout << "Enter 10 numbers: ";

    for ( i = 1; i <= 10; i++){
        cin >> num;
        factorial = 1;
        

        for ( j = 1; j <= num; j++){
            factorial = factorial*j;
        }
        cout << "factorial is: " << factorial << endl;
    }
    return 0;
}   


