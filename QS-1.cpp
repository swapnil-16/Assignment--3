1.Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.
#include <iostream>
using namespace std;
int main()

{
	int number, remainder, sum = 0;
	cout << "enter a positive integer" << endl;
	cin >> number;
	while (number > 0) {
		remainder = number % 10;
		sum = sum + remainder;
		number = number / 10;
		
	}
	cout << "Sum of digits is" << endl;
	cout << sum << endl;
	
}