// Question 1
// Write a C++ program to calculate the length of a string

#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string name = "Varshney";
    cout << "The length of the string is: " << name.length();

    return 0;
}



// Question 2
// Write a C++ program to accept a string from user and display it

#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string first_name;

    cout << "Enter your name: ";
    cin >> first_name;
    
    return 0;
}



// Question 3
// Write a C++ program to accept a string from user and copy it to another string

#include <iostream>
#include <string.h>
using namespace std;
int main(){

    string first_name;
    cout <<"Enter you first name: ";
    cin >> first_name;

    string last_name;
    cout << "Enter your last name: ";
    cin >> last_name;

    string full_name = first_name + " " + last_name;
    cout << "Your full name is: " << full_name;

    return 0;
}



// Question 4
// Write a C++ program take a string from user and count the words

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[200] = {0};   
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    int i = 0;
    bool inWord = false;
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
        i++;
    }

    cout << "Number of words: " << count << endl;

    return 0;
}
