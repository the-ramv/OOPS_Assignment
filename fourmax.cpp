// Write a C++ program to check for the maximum number among 4 numbers


//if

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3,num4;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if(num1 > num2 && num1 >> num3 && num1 > num4){
        cout << "Num1 is max";
    }
    else if(num2 > num1 && num2 >> num3 && num2 > num4 ){
        cout << "num2 is max";
    }
    else if(num3 > num1 && num3 >> num2 && num3 > num4){
        cout << "num3 is max";
    }
    else{
        cout << "num4 is max";
    }
    return 0;
}




//nested if

#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4;

    cout << "Enter 4 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if(num1>num2){
        if(num1>num3){
            if(num1>num4){
                cout << "num1 is max";
            } else{
                cout << "num4 is max";
            }
        }
       

        else{
            if(num3>num4){
                cout << "num3 is max";
            }
            else{
                cout << "num4 is max";
            }
        }
    }

        else{
                if(num2>num3){
                    if(num2>num4){
                        cout << "num2 is max";
                    }
                    else{
                        cout << "num4 is max";
                    }
                }
          

            else{
                if(num3>num4){
                  cout << "num3 is max";
                }
                else{
                    cout << "num4 is max";
                }
            }
        }
    
    return 0;
}
 



switch

#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3,num4,choice;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if(num1 > num2 && num1 >> num3 && num1 > num4){
        choice = 1;
    }

    else if(num2 > num1 && num2 >> num3 && num2 > num4 ){
        choice = 2;
    }

    else if(num3 > num1 && num3 >> num2 && num3 > num4){
        choice = 3;
    }
    else{
        choice = 4;
    }

    switch(choice){

        case 1:
            cout << "num1 is max";
            break;

        case 2:
            cout << "num2 is max";
            break;

        case 3:
            cout << "num3 is max";
            break;

        case 4:
            cout << "num4 is max";
            break;

        default:
            cout << "invalid input";
    }

    return 0;
}