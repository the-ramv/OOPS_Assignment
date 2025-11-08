// Question 1
// Write a C++ program to check for vowels 

// if else

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel.";
    } else {
        cout << ch << " is not a vowel.";
    }

    return 0;
}




// switch

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;

    if (ch == 'a')
        cout << "Vowel";
    else if (ch == 'e')
        cout << "Vowel";
    else if (ch == 'i')
        cout << "Vowel";
    else if (ch == 'o')
        cout << "Vowel";
    else if (ch == 'u')
        cout << "Vowel";
    else
        cout << "Not a vowel";

    return 0;
}



// Question 2
// Write a C++ program to perform the following task
// 1 Area of circle
// 2 Circumference of circle 
// 3 Area of triangle
// 4 Area of rectangle


// if

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Area of Circle\n2. Circumference of Circle\n3. Area of Triangle\n4. Area of Rectangle\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r;
    }
    else if (choice == 2) {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Circumference of Circle = " << 2 * 3.14 * r;
    }
    else if (choice == 3) {
        double b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of Triangle = " << 0.5 * b * h;
    }
    else if (choice == 4) {
        double l, w;
        cout << "Enter length and width: ";
        cin >> l >> w;
        cout << "Area of Rectangle = " << l * w;
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}

