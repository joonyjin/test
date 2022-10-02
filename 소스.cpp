#include <iostream>
#include <string>
using namespace std;

int main() {
	string b;
	while (true) {
		cout << "Type a word ('exit' to Exit) : ";
		cin >> b;
		if (b == "exit") {
			cout << "Exiting...";
			break;
		}
	}
}