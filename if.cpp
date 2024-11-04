#include<iostream>
using namespace std;

//function declaration
void halloween();

int main() {
	halloween(); 
}

//functions definition
void halloween() {
	int num; //sets up a variable
	cout << "how was your halloween (1-10)" << endl;
	cin >> num; //store user input in varible
	if (num < 5)
		cout << "sorry it was not good :(" << endl;
	else if (num >= 5)
		cout << "Im glad it was good!" << endl;

}
