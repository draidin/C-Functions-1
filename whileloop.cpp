#include<iostream>
using namespace std;

//declaration
void scary();

int main(){
	scary(); //call


}

//definition
void scary() {
	char potato = 'm';
	while (potato != 'q') {
		cout << "BOO!!" << endl;
		cout << "press any key for another BOO, q to quit." << endl;
		cin >> potato;
	}
}
