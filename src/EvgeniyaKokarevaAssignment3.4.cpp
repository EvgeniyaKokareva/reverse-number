
#include <iostream>
using namespace std;

void reverseDigits(int);

int main() {

	unsigned int num;
	cout << "please enter the positive number";
	cin >> num;

	cout << "new number is ";
	reverseDigits(num);

	return 0;
}

//recursive method to reverse the number
void reverseDigits(int input){
	if (input == 0) {
		return;
	}

	cout << (input % 10);
	reverseDigits(input/10);
}
