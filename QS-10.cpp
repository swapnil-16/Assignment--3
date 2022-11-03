10.Write a program to accept a list L1 of N integers. Accept integer D. Generate list L2 such that it contains only those integers from list L1 which are divisible by D. Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, m, count = 0;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	cout << "Enter division number " << endl;
	cin >> m;
	int* a;
	a = new int[n];
	cout << "Enter the elements of list" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] % m == 0) {
			count++;
		}
	}
	int* b;
	b = new int[count];

	for (int j = 0; j < count; j++) {
		for (int i = 0; i < n; i++) {
			if (a[i] % m == 0) {
				b[j] = a[i];
				j++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	cout << "New array" << endl;
	for (int i = 0; i < count; i++) {
		cout << b[i] << endl;
	}
	cout << "Size of new list is " << count << endl;
	delete[] a;
	delete[] b;
}