6.Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the result
#include <iostream>
using namespace std;
int main()

{
	int CP, SP, profit, loss;
	cout << "Enter cost price " << endl;
	cin >> CP;
	cout << "Enter selling price" << endl;
	cin >> SP;

	
	if (SP>CP) {
		profit = SP - CP;
		cout << "profit OF" << profit << endl;
	}
	else {
		loss = CP - SP;
		cout << "Loss of" << loss << endl;
	}
	}