4.Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.
#include<iostream>
#include<string>
using namespace std;
int main() {
    int i, sum = 0;
    cout << "Enter a number";
    cin >> i;
    string s;
    s = to_string(i);
    //cout << s<<endl;
    if (s.length() == 5) {
        int* a;
        a = new int[s.length()];
        for (int i = 0; i < s.length(); i++) {
            a[i] = s[i];
            if (i == 0 || i == 4) {
                sum += a[i] ;
            }
        }
     cout << sum;
       delete[] a;
  }
   else cout << "Invalid Inout";
}