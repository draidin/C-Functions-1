#include<iostream>
using namespace std;

//declaration
void box();

int main() {
    box(); //call
    box();
    box();

}

//function definition
void box() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << "*";
        cout << endl;//inside outer loop
    }
}

