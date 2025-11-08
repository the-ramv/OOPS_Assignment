// Question 1
// Write a C++ program to display the sum of matrix 

#include <iostream>
using namespace std;
int main(){


    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            sum += arr[i] [j];
        }
    }

    cout << "Total sum is: " << sum << endl;

    return 0;
}




// Question 2
// Write a C++ program to count positive and negative numbers in a 2D array

#include <iostream>
using namespace std;
int main(){


    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    int positive = 0;
    int negative = 0;

    for ( i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (arr[i][j] > 0){
                positive++;
            }
            else{
                negative++;
            }
        }
    }

    cout << "There are " << positive << " positive numbers in this 2D array" << endl;
    cout << "There are " << negative << " negative numbers in this 2D array" << endl;

    return 0;
}



// Question 3
// Write a C++ program to check for a prime number in a 2D array 

#include <iostream>
using namespace std;
int main(){


    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int k;
    int isprime = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            bool prime = true;
            if (arr[i][j] < 2){
                prime = false;
            }   
            else{
                for ( k = 2; k*k <= arr[i][j]; k++){
                    if ( arr[i][j] % k == 0){
                        prime = false;
                        break;
                    }
                }
            }
            if (prime){
                isprime++;
                cout << arr[i][j] << " is a prime number" << endl;
            }
            else{
                cout << arr[i][j] << " is not a prime number" << endl;
            }
        }
    }

    cout << "There are " << isprime << " prime numbers in this 2D array" << endl;
    
    return 0;
}



// Question 4
// Write a C++ program to check for palindrome number in a 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << " Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ispal = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int original = arr[i][j];
            int temp = arr[i][j];
            int digits = 0;
            int rev = 0;
            while ( temp > 0){
                digits = temp % 10;
                rev = rev*10 + digits;
                temp /= 10;
            }

            if ( original == rev){
                ispal++;
                cout << arr[i][j] << " is a palindrome" << endl;
            }
        }
    }

    cout << "There are " << ispal << " palindrome numbers in this array";
    return 0;
}



// Question 5
// Write a C++ program to check for armstrong number in a 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements in the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int isarmstrong = 0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int temp = arr[i][j];
            int digits = 0;
            while ( temp > 0){
                digits++;
                temp /= 10;
            }
            int sum = 0;
            temp = arr[i][j];
            while ( temp > 0){
                int digit = temp % 10;
                int power = 1;
                for ( int k = 0; k < digits; k++){
                    power *= digit;
                }

                sum += power;
                temp /= 10;
            }

            if ( arr[i][j] == sum){
                isarmstrong++;
                cout << arr[i][j] << " is a armstrong number" << endl;
            }
        }
    }

    cout << "There are " << isarmstrong << "  armstrong numbers in this array " << endl;
    return 0;
}



// Question 6
// Write a C++ program to get the sum of every digit in a 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3] = {};
    int sum[3][3] = {};
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int digitsum = 0;
            int num = arr[i][j];
            while ( num > 0){
                digitsum += num % 10;
                num /= 10;
            }
            sum[i][j] = digitsum;
        }
    }

    cout << "New array is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



// Question 7
// Write a C++ program to display the sum of two matrices in a third matrix

#include <iostream>
using namespace std;
int main(){

    int arr[3][3] = {};
    int arr2[3][3] = {};
    int sum[3][3] = {};
    int i,j,k;

    cout << "Enter the elements of 1st matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }

    cout << "Elements of 2nd array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    cout << "New array is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// Question 8
// Write a C++ program to interchange the elements of two matrices

#include <iostream>
using namespace std;
int main(){

    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int i,j;

    cout << "Enter the elements of 1st matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >>  arr2[i][j];
        }
    }

    cout << "Elements of the 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }


    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int temp[3][3] = {};
            temp[i][j] = arr1[i][j];
            arr1[i][j] = arr2[i][j];
            arr2[i][j] = temp[i][j];
        }
    }


    cout << "New elements of 1st matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "New elements of 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



// Question 9
// Write a C++ program to multiply two matrices

#include <iostream>
using namespace std;
int main(){

    int arr1[3][3] = {};
    int arr2[3][3] = {};
    int arr3[3][3] = {};
    int i,j;

    cout << "Enter the elements of 1st array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Elements of 1st array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the elements of 2nd matrix: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }

    cout << "Elements of 2nd matrix are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            arr3[i][j] = arr1[i][j]*arr2[i][j];
        }
    }

    cout << "New matrix is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// Question 10
// Write a C++ program to display the sum of the elements in the 2D array

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int i,j;

    cout << "Enter the elements of the array: ";
    for ( i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Elements of the array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int sumarr[3][3] = {};
    
    cout << "New matrix: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            int digits = 0;
            int sum = 0;
            int temp = arr[i][j];
            while( temp > 0){
                digits = temp % 10;
                sumarr[i][j] += digits;
                temp /= 10; 
            } 
            cout << sumarr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// Question 11
// Write a C++ program to transpose a matrix

#include <iostream>
using namespace std;
int main(){

    int arr[3][3];
    int transpose[3][3];
    int i,j;

    cout << "Enter the elements of 1st array: ";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements of 1st array are: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    cout << "New array is: \n";
    for ( i = 0; i < 3; i++){
        for ( j = 0; j  < 3; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



// Question 12
// Write a C++ program to sort the elements in a 2D array

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int temp[9];  
    int i, j, k = 0;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
            temp[k++] = arr[i][j]; 
        }
    }

    for (i = 0; i < 9 - 1; i++) {
        for (j = 0; j < 9 - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }


    k = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            arr[i][j] = temp[k++];
        }
    }

    cout << "Sorted array: \n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
