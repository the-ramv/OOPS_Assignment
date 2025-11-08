// Question 1 
// Write a C++ program to print an array

#include <iostream>
using namespace std;
int main(){

    int arr[5] = {1,2,3,4,5};

    cout << "Elements in the array are: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}




// Question 2
// Write a C++ program to accept 10 numbers from user and display them

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int sum = 0;

    cout << "Enter the elements of the array: ";
    for ( int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for ( i = 0; i < 10; i++){
        cout << arr[i]<<endl;
    }

    for ( i = 0; i < 10; i++){
        sum = sum + arr[i];
    }

    cout << "\nThe sum of the elements is: " << sum << endl;
    return 0;
}



// Question 3
// Write a C++ program to accept 10 numbers array and count the 2 digits even numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int even = 0;

    cout << "Enter the elements of the array; ";
    for ( i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        if ( arr[i] >= 10){
            if ( arr[i] % 2 ==0){
                even++;
            }
        }
    }

    cout << "There are " << even << " double digit even numbers";
    return 0;
}




// Question 4
// Write a C++ program to create an array of 10 numbers and count all perfect numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int count = 0;

    cout << "The elements in the array are: ";
    for ( int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( int i = 0; i < 10; i++){
        int num = arr[i];
        int sum = 0;

        for ( int j = 1; j < num; j++){
            if ( num % j == 0){
                sum += j;   
            }
        }
        if ( sum == num && num != 0){
            count++;
        }
    }


    cout << "There are " << count << " perfect numbers";

    return 0;
}



// Question 5
// Write a C++ program to check for a palindrome number in an array of 10 numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int pal = 0;

    cout << "Elements in the array are: ";
    for ( i = 0;  i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        int original = arr[i];
        int temp = arr[i];
        int rev = 0;

        while (temp>0){
            int digit = temp % 10;
            rev = rev*10 + digit;
            temp /= 10;
        }

        if ( original == rev){
            pal++;
            cout << original << " is a palindrome" << endl;
        }
    }

    cout << "There are " << pal << " palindrome number in the array";
    return 0;
}



// Question 6
// Write a C++ program to check if a number is armstrong in an array of 10 numbers

#include <iostream>
using namespace std;
int main(){

    int arr[10];
    int i;
    int armstrong = 0;
    cout << "Elements of the array are: ";
    for ( i = 0; i < 10; i++){
        cin >> arr[i];
    }

    for ( i = 0; i < 10; i++){
        int num = arr[i];
        int temp = num;
        int digits = 0;
        while (temp > 0){
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;
        
        while ( temp > 0){
            int digit = temp % 10;
            
            int power = 1;
            for ( int j = 0; j < digits; j++){
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if ( sum == num && num != 0){
            armstrong++;
            cout << num << " is a armstrong number" << endl;
        }
    }
    cout << "There are " << armstrong << " armstrong numbers in the array" << endl;
    return 0;
}
