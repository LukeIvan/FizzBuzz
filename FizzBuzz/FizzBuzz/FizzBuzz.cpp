#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string output;

int main()
{
	for (int a = 1; a < 101; a++)
	{
		output = "";
		cout << endl;

		if (a % 3 == 0 && a % 5 == 0) { output = "FizzBuzz"; }
		else if (a % 3 == 0) { output = "Fizz"; }
		else if (a % 5 == 0) { output = "Buzz"; }
		else { cout << a; }
		
		cout << output;
	}

	int a;
	cin >> a;

	return 0;
}