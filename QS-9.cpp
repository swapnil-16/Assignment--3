9.Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.
#include<iostream>
using namespace std;
int main() {
	int n, m;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	cout << "Enter multiplication " << endl;
	cin >> m;
	int* a;
	a = new int[n];
	int* b;
	b = new int[n];
	cout << "Enter the elements of list" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i] * m;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}
	delete[] a;
	delete[] b;
}