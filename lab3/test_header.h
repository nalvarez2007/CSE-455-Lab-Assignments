#include <iostream>
#include <cmath>

using namespace std;

class Math {
	float number1;
	float number2;
	float sum;
	float diff;
	float product;
	float quotient;

	public:
		void set_value(int,int);
		float add();
		float subtract();
		float multiply();
		float divide();
};

void Math::set_value(int d, int g) {
	number1 = d;
	number2 = g;
}

float Math::add() {

	sum = number1 + number2;
	return sum;
}

float Math::subtract() {

	diff = number1 - number2;
	return diff;
}

float Math::multiply() {
	product = number1 * number2;
	return product;
}

float Math::divide() {
	quotient = number1 / number2;
	return quotient;
}
