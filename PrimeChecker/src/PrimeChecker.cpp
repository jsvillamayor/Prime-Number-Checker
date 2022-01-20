//============================================================================
// Name        : PrimeChecker.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

bool primeCheck(int num);

int main() {

	int number;
	bool primeFlag = true;

	cout << "Number: ";
	cin >> number;

	primeFlag = primeCheck(number);

	if (primeFlag == true)
		cout << number << " is a prime number." << endl;
	else
		cout << number << " is NOT a prime number." << endl;

	return 0;
}

bool primeCheck(int num){

	for(int i = 2; i < num; i++){
		if(num % i == 0)
			return false;
	}

	return true;

}
