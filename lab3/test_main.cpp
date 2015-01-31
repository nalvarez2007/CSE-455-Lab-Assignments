#include "test_header.h"

int main() {
	Math digits;

	float s;
	float d;
	float q;
	float p;
	float x;
	float y;

	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter another number: ";
	cin >> y;

	digits.set_value ( x , y);

	s = digits.add();
	d = digits.subtract();
	q = digits.divide();
	p = digits.multiply();

	cout << "The sum of the two numbers is: " << s << endl;
	cout << "The difference between the two numbers is: " << d << endl;
	cout << "The product of the two numbers is: " << p << endl;
	cout << "The quotient of the two numbers is: " << q << endl;
}
