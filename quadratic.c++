//Quadratic Solver Program by Ryan Fung
#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Quadratic Solver Program" << endl;
	long double a = 0;
	while (a==0) {
		cout << "Input the co-efficient of x²: "
		cin >> a;
		if (a==0) {cout << endl; << "Leading co-efficient cannot be 0!"}
	}
	long double b = 0;
	cout << endl << "Input the co-efficient of x: ";
	cin >> b;
	long double c = 0;
	cout << endl << "Input the constant: ";
	cin >> c;
	long double d = (b*b)-(4*a*c)
	if (d==0) {
		long double x = ( ( (sqrt(d)) -b ) / (2*a) );
		cout << "Root of x:" << endl << x << endl;
	}
	if (d>0) {
		long double x1 = ( ( (sqrt(d)) -b ) / (2*a) );
		long double x2 = ( ( -(sqrt(d)) -b ) / (2*a) );
		cout << "Roots of x:" << endl << x1 << endl << x2 << endl;
	}
	if (d<0) {
		cout << "No real roots of x." << endl;
	}
	cout << "Press any key to exit.";
	char key;
	cin >> key;
	return 0;
}