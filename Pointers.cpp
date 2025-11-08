//Pointers in cpp
// 1. Write a C++ program to display the address and value of a variable using a pointer.


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a; // pointer storing address of variable 'a'

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 25; // modify value of 'a' using pointer
    cout << "Updated value of a using pointer: " << a << endl;
    return 0;
}





//2. Write a C++ program to demonstrate the concept of a pointer to a pointer.
#include <iostream>
using namespace std;

int main() {
    int var = 100;
    int *ptr = &var;
    int **pptr = &ptr; // pointer to another pointer

    cout << "Value of var: " << var << endl;
    cout << "Value using single pointer: " << *ptr << endl;
    cout << "Value using double pointer: " << **pptr << endl;
    return 0;
}



//3. Write a C++ program to swap two numbers using pointers.
#include <iostream>
using namespace std;

void swapValues(int *x, int *y) { // function using pointers to swap values
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapValues(&a, &b); // pass addresses to function
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}



//4. Write a C++ program to store and display multiple strings using an array of pointers.
#include <iostream>
using namespace std;

int main() {
    const char *names[] = {"C++", "Python", "Java", "C"}; // array of string pointers
    for (int i = 0; i < 4; i++)
        cout << names[i] << endl;
    return 0;
}
