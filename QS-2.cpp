2.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
#include <iostream>
using namespace std;
int main()

{
	int number, remainder, M = 0;
	cout << "enter a positive integer" << endl;
	cin >> number;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		M = (M * 10) + remainder;
	}
	cout << "the reverse number is" << endl;
	cout << M << endl;
	if (number > M) {
		cout << "number is greater" << endl;
	}
	else {
		cout << "M is greater" << endl;
	}
}