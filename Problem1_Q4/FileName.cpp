#include<iostream>

using namespace std;

int main()
{
	//4.Accepts two numbers and computes their sum, difference, product, Quotient and Remainder.

	double n1, n2, sum, different, product, quotent, reaminder; 
	cout << "Enter the first number: ";
	cin >> n1;
	
	cout << "Enter the second number: ";
	cin >> n2;

	cout << endl;

	cout << "Sum: " << n1 + n2 << endl;
	cout << "Different: " << n1 - n2 << endl;
	cout << "Product: " << n1 * n2 << endl;
	cout << "Quotent: " << n1 / n2 << endl;
	cout << "Modulus " << (int)n1 % (int)n2 << endl;

	return 0;
}